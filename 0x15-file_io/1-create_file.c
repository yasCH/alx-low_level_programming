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
ssize_t writer;
int creator;
if (filename == NULL || text_content == NULL)
{
return (-1);
}
creator = creat(filename, S_IRWXG);
if (creator < 0)
{
return (-1);
}
writer = write(STDOUT_FILENO, text_content, strlen(text_content));
if (writer < 0 || writer != sizeof(text_content))
{
return (-1);
}
return (1);
}
