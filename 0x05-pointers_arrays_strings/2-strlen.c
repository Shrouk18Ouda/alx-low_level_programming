#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
*/
int _strlen(char *s)
{
	int num;

	for (num = 0; *s != '\0'; s++)
	{
		num++;
	}
	return (num);
}
