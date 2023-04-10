#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
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
ssize_t reader;
ssize_t writer;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}
buffer = (char *) malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
reader = read(fd, buffer, letters);
if (reader < 0)
{
free(buffer);
close(fd);
return (0);
}
writer =write(1, buffer, reader);
if (writer < 0 || writer !=reader)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (reader);
}
