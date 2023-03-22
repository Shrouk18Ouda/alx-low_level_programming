#include "main.h"
/**
 * _isalpha - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase or uppercase, otherwise 0.
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
