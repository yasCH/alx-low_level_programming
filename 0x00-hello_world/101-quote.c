#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (failure)
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora";
char *messages = " Korpar, 2015-10-19\n";
write(STDERR_FILENO, message messages, 59);
return (1);
}
