#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description: a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
i *
 * Return: Always (0) Success
 */
int main(void)
{char aph;
for (aph = 'a'; aph <= 'z'; aph++)
	{putchar(aph);
	}
	for (aph = 'A'; aph <= 'Z'; aph++)
	{putchar(aph);
	}
	putchar('\n');
	return (0);
}

