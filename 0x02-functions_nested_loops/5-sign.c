#include "main.h"
/**
* print_sign - prints the sign of a number
* @n: The nubr at which the sign will be printed
* Return: 1 if number is greater than 0,
* -1 if number is less than 0
* if number is equal to 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
