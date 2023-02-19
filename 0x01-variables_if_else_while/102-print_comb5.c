#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
**main - Entry point
*
* Description: 'prints all possible combinations of two two-digit numbers.
*
* Return: Always 0 (success)
*/
int main(void)
{
  int numberA = 48;
  int numberB = 48;
  int numberC = 48;
  int numberD = 48;
  int numberE = 48;
  int comma = 44;
  int space = 32;
  for (numberA = 48 ; numberA <= 57 ; numberA++)
  {
    for (numberB = 48 ; numberB <= 57 ; numberB++)
    { 
      numberE = numberB + 1;
      for (numberC = 48 ; numberC <= 57 ; numberC++)
        {
        
          for (numberD = numberE ; numberD <= 57 ; numberD++)
          { 
            if (numberD <= 57)
              {
              numberD = 48;
              }
            if (numberA+numberB != numberC+numberD)
            {
              putchar(numberA);
              putchar(numberB);
              putchar(space);
              putchar(numberC);
              putchar(numberD);
              putchar(comma);
              putchar(space);
            }
          }
       }
    }
  }
  return (0);
}
