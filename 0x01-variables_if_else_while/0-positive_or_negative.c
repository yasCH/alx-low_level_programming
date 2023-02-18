#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
 if (n > 0);
 {
 printf("is positif\n");
 }
 else if (n == 0);
 {
 printf("is zero\n");
 }
 else (n < 0);
 {
 printf("is negatif\n");
 }
 
	return (0);
}
 
