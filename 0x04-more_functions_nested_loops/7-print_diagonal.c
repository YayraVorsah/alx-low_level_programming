#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0) /* if n is 0 or less */
	{
		_putchar('\n'); /* print only a newline */
	}
	else
	{
		int i, j;

		for (i = 1; i <= n; i++) /* loop n times */
		{
			for (j = 1; j < i; j++) /* print i-1 spaces */
			{
				_putchar(' ');
			}
			_putchar('\\'); /* print a \ */
			_putchar('\n'); /* end the line with a newline */
		}
	}
}

