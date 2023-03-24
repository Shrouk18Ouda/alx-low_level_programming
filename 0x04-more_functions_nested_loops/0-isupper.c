#include"main.h"
/**
 * _isupper - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
*/
int _isupper(int c)
{
	if (c >= 97 && c >= 122)
		return (1);
	else
		return (0);
}
