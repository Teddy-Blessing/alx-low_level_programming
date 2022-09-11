#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints all alphabets in lowercase.
 * Return: 0 Success.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
