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
* @value:character to check 
*
* Return:0
*/

int _abs(int value)
{
  if (value < 48)
  {
  value = ((45)value);
  _printchar(value);
  }
  else
  {
   _printchar(value);
  return (0);
  }
}
