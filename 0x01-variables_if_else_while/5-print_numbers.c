#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints all single digit
 * numbers of base 10.
 * Return: 0 Success..
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');
	return (0);
}
