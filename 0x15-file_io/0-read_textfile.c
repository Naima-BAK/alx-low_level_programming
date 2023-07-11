#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: A pointer.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *pointer;
ssize_t _open, _read, _write;

if (filename == NULL)
{
return (0);
}

pointer = malloc(sizeof(char) * letters);

if (pointer == NULL)
{
return (0);
}

_open = open(filename, O_RDONLY);
_read = read(_open, pointer, letters);
_write = write(STDOUT_FILENO, pointer, _read);

if (_open == -1 || _read == -1 || _write == -1 || _write != _read)
{
free(pointer);
return (0);
}

free(pointer);
close(_open);

return (_write);
}
