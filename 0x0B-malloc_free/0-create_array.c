#include"main.h"
#include<stdlib.h>
/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @c: char
 * @size: size of arry
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	char *x = (char *) malloc(size);

	if (size == 0 || x == 0)
	{
		return (0);
	}
	while (size--)
	{
		x[size] = c;
	}
	return (x);
}
