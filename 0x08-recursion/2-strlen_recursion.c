#include"main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s : char
 *
 * Return: name
*/
int _strlen_recursion(char *s)
{
	int name = 0;

	if (*s > '\0')
	{
	name = name + _strlen_recursion(s + 1) + 1;
	}
return (name);
}
