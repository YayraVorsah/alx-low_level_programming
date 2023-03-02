#include "main.h"
#include <stdio.h>

/**
*_strncpy - copies a string up to n bytes
*@dest: pointer to the destination array where the content is to be copied
*@src: pointer to the source of data to be copied
*@n: maximum number of bytes to be used from src
*Return: pointer to the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

