#include <stdio.h>
#include <stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: the file name
 * @text_content: null terminated string
 * Return: 1 on success -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t writer;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd < 0)
{
return (-1);
}
if (text_content != NULL)
{
writer = write(fd, text_content, sizeof(text_content));
}
if (writer != sizeof(text_content))
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
