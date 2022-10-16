#include<stdio.h>
/**
 * main - pa program that prints the lowercase alphabet in reverse,
 * ollowed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{char aph;
for (aph = 'z'; aph >= 'a'; aph--)
{
putchar(aph);
}
putchar('\n');
return (0);
}


