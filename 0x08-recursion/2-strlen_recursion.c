#include"main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s : char
 *
 * Return: 0
*/
int _strlen_recursion(char *s)
{
	putchar(*s);
	putchar('\n');
	_strlen_recursion(s);
}
