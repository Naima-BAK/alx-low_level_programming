#include "main.h"


char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file..
 * Return: the pointer.
 */
char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buffer);
}

/**
 * close_file - Closes file.
 * @fd: The file descriptor.
 * Return: void.
 */
void close_file(int fd)
{
int test;

test = close(fd);

if (test == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
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
int file_from, file_to, _read, _write;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
file_from = open(argv[1], O_RDONLY);
_read = read(file_from, buffer, 1024);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (file_from == -1 || _read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

_write = write(file_to, buffer, _read);

if (file_to == -1 || _write == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

_read = read(file_from, buffer, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);

} while (_read > 0);

free(buffer);
close_file(file_from);
close_file(file_to);

return (0);
}
