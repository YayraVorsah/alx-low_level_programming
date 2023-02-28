/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 * @dest: Destination buffer to copy the string to.
 * @src: Source string to be copied.
 *
 * Return: A pointer to the destination string dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

