/**
 * _puts - Prints a string to stdout followed by a newline
 *
 * @str: A pointer to the string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}

