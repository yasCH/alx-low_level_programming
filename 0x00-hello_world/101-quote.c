#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (failure)
 */
int main(void)
{
char *new = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO,new,59);
return (1);
}
