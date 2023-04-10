#include <stdio.h>
#include <stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: the file name
 * @text_content: null terminated string
 * Return: 1 on success -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
if (filename == NULL && text_content == NULL)
{
return (-1);
}
creat(filename,S_IRWXG);
open(filename,O_RDWR);
write(1, text_content, sizeof(text_content));
return (1);
}
