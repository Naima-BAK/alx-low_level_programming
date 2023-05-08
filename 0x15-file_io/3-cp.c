#include "main.h"

/**
 * create - Allocates 1024 bytes.
 * @wfile: The name of the file.
 * Return: the pointer.
 */

char *create(char *wfile)
{
char *pointerr;

pointerr = malloc(sizeof(char) * 1024);

if (pointerr == NULL)
{
dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", wfile);
exit(99);
}

return (pointerr);
}

/**
 * closef - Close file.
 * @descp: The file descriptor to be closed.
 * Return: void.
 */

void closef(int descp)
{
int c;

c = close(descp);

if (c == -1)
	{
dprintf(STDERR_FILENO, "Error: Can't close descp %d\n", descp);
exit(100);
}
}

/**
 * main - Copy the content of a file1 to file2.
 * @argc: The number of arguments.
 * @argv: An array of pointers.
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
int _read, _write, file_from, file_to;
char *pointerr;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

pointerr = create(argv[2]);
file_from = open(argv[1], O_RDONLY);
_read = read(file_from, pointerr, 1024);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (file_from == -1 || _read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(pointerr);
exit(98);
}

_write = write(file_to, pointerr, _read);
if (file_to == -1 || _write == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(pointerr);
exit(99);
}

_read = read(file_from, pointerr, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);

} while (_read > 0);

free(pointerr);
closef(file_from);
closef(file_to);
return (0);
}
