#include "main.h"
/**
* print_last_digit- prints out the last digits of numbers
* @n: The number in question
* Return: value of the digit
*/
int print_last_digit(int n)
{
int a;
if (n < 0)
n = -n;
a = n % 10;
if (a < 0)
a = -a;
_putchar (a + '0');
return (a);
}
