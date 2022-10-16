#include<stdio.h>
/**
 * main - The Entry Point
 *
 * Description: a program that prints all single digit
 * numbers of base 10 starting from 0
 *
 * Return: Always (0) Success
 */
int main(void)
{int num = 0;
while (num <= 9)
{
printf("%d", num);
num++;
}
printf("\n");
return (0);
}

