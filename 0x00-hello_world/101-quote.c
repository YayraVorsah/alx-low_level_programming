#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(str) - 1;

	write(STDERR_FILENO, str, len);
	return (1);
}

