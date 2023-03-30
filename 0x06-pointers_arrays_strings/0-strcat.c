#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: it is string
 * @src: it is string
 * Return: pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int c, s;

	for (c = 0; dest[c]; c++)
		for (s = 0; src[s]; s++)
			dest[c] = src[s];
	c++;
	return (dest);
}
