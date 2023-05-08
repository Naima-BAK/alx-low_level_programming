#include "main.h"
/**
 * create_file -creates a file.
 * @text_content: a NULL terminated string to write to the file.
 * @filename: the name of the file to create.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int _open, _write, size;
size = 0;

if (filename == NULL)
{
return (-1);
}

if (text_content != NULL)
{

for (size = 0; text_content[size];)
{
size++;
}

}

_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
_write = write(_open, text_content, size);

if (_open == -1 || _write == -1)
{
return (-1);
}


close(_open);

return (1);
}
