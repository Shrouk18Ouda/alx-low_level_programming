#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: it is string
 * @src: it is string
 * Return: pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int s;
	int c;

	for (s = 0; dest[s]; s++)
		;
	for (c = 0; src[c]; c++)
	{
		dest[s + c] = src[c];
	}
	dest[s + c] = '\0';
	return (dest);
}
