#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: the file name
 * @letters: the number of letters to read & print.
 * Return: n of letters or 0 if filename is NULL, write fails, file cant o&r.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
buffer = (char *) malloc(letters);
read(fd,buffer,letters);
return (letters);
}
