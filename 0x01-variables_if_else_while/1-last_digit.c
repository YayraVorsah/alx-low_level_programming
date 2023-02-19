#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int LastDigit = n % 10;

	printf("Last digit of %d is %d ", n, LastDigit);

	if (LastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (LastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is leass than 6 and not 0\n");
	}

	return (0);
}
