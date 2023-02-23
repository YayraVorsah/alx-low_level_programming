#include "main.h"

/**
 * print_square - prints a square of size "size" using the # character
 *
 * @size: size of the square to print
 *
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0) /* if size is 0 or less */
	{
		_putchar('\n'); /* print only a newline */
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++) /* loop "size" times for rows */
		{
			for (j = 0; j < size; j++) /* loop "size" times for columns */
			{
				_putchar('#'); /* print a # character */
			}
			_putchar('\n'); /* end the row with a newline character */
		}
	}
}

