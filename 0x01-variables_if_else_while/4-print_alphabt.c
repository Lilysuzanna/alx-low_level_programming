#include<stdio.h>
/**
 * main - The Entry Point
 *
 * Description: Print all the letters except q and e
 *
 * Return: Always (0) Success
 */
int main(void)
{char aph = 'a';
while (aph <= 'z')
{
if (aph != 'q' && aph != 'e')
putchar(aph);
aph++;
}
	putchar('\n');
	return (0);
}

