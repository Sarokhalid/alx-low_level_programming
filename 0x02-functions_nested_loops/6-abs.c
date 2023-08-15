#include "main.h"
 /**
  * _abs - compute absulute value for an integer
  * @i: input number as userinput
  * Return: absolute value
  */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
