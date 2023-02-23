#include "main.h"

/**
 * print_triangle - prints a triangle of size "size" using the # character
 *
 * @size: size of the triangle to print
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0) /* if size is 0 or less */
	{
		_putchar('\n'); /* print only a newline */
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++) /* loop "size" times for rows */
		{
			for (j = 1; j <= size - i; j++) /* loop "size - i" times for spaces */
			{
				_putchar(' '); /* print a space character */
			}
			for (j = 1; j <= i; j++) /* loop "i" times for # characters */
			{
				_putchar('#'); /* print a # character */
			}
			_putchar('\n'); /* end the row with a newline character */
		}
	}
}

