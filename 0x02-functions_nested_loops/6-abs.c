#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
**_abs - Prototype practicing
*
* Description:Write a function that computes 
* the absolute value of an integer.
*
* @v:character to check 
*
* Return:0
*/

int _abs(int)
{
  int value;
  if (value < 0)
  {
  printf("%d",(value*(-1)));
  }
  else
  {
  printf("%d", value);
  return (0);
  }
}
