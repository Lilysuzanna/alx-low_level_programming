#include <stdio.h>
/**
 * _strlen_recursion - length of string
 * @s: string
 * done by Suzette
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
