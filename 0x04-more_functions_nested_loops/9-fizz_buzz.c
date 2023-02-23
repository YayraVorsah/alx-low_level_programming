#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from 1 to 100, replacing multiples of 3 and 5
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) /* if i is a multiple of both 3 and 5 */
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0) /* if i is a multiple of 3 */
		{
			printf("Fizz");
		}
		else if (i % 5 == 0) /* if i is a multiple of 5 */
		{
			printf("Buzz");
		}
		else /* if i is not a multiple of 3 or 5 */
		{
			printf("%d", i);
		}
		if (i < 100) /* if not the last iteration, add a space */
		{
			printf(" ");
		}
	}
	printf("\n"); /* end the line with a newline character */
	return (0);
}

