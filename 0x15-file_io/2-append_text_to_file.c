#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int _open, _write, size = 0;

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

_open = open(filename, O_WRONLY | O_APPEND);
_write = write(_open, text_content, size);

if (_open == -1 || _write == -1)
{
return (-1);
}

close(_open);

return (1);
}
