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
  
  int comma = 44;
  int space = 32;
  for (numberA = 48 ; numberA <= 57 ; numberA++)
  {
    for (numberB = 48 ; numberB <= 57 ; numberB++)
    {
      for (numberC = 48 ; numberC <= 57 ; numberC++)
        {
          for (numberD = 48 ; numberD <= 57 ; numberD++)
          { 
          
            
              if ((numberA*10)+numberB < (numberC*10)+numberD)
              {
                putchar(numberA);
                putchar(numberB);
                putchar(space);
                putchar(numberC);
                putchar(numberD);
                if ((numberA == 57) && (numberB == 56) && (numberC == 57) && (numberD == 57))
                {
                  putchar('\n');
                }
                else 
                {
                  putchar(comma);
                  putchar(space);
                }

               }
            } 
         }
      }
    }
    return (0);
  }
