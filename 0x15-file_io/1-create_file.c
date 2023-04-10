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
if (filename == NULL && text_content == NULL)
{
return (-1);
}
creat(filename,S_IRWXG);
fd = open(filename,O_RDWR);
if (fd < 0)
{
return (-1);
}
writer = write(fd, text_content, strlen(text_content));
if (writer < 0)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
