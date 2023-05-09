#include "main.h"

/**
 * main - Copy the content of a file1 to file2.
 * @argc: The number of arguments.
 * @argv: An array of pointers.
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
int num_bytes_to_read, num_bytes_to_write, file_from, file_to;
char buffer[BUFFER_SIZE];
mode_t mode_T = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
return (97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
return (98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode_T);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
return (99);
}
while ((num_bytes_to_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
num_bytes_to_write = write(file_to, buffer, num_bytes_to_read);
if (num_bytes_to_write != num_bytes_to_read)
{
dprintf(STDERR_FILENO, "Error: Write to file %s fails\n", argv[2]);
return (99);
}
}
if (num_bytes_to_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
return (98);
}
if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
return (100);
}
if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
return (100);
}
return (0);
}
