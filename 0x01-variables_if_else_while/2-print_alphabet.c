#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:print a b c d .....z
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; ++f)
	putchar(f);
	return (0);
}
