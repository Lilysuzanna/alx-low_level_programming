#include<stdio.h>
/**
 * main - Entry Points
 *
 * Description: program that prints all possible
 * combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{char c;
int d;
c = 'a';
d = '0';
while
(d < 10) {
putchar(d + '0');
c++;
}
while
(c <= 'f') {
putchar(c);
c++;
}
putchar('\n');
return (0);
}

