#include <stdio.h>
#include <stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Write a function that appends text
 * at the end of a file.
 * @filename: the file name
 * @text_content: null terminated string to add 
 * Return: 1 on success -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t writer;
if filename == NULL)
{
return (-1);
}
fd = open(filename,O_RDWR);
if (fd < 0)
{
return (-1);
}
if (text_content != NULL)
{
writer = write(fd, text_content, strlen(text_content));
}
else
{
return (-1);
}
close(fd);
return (1);
}
