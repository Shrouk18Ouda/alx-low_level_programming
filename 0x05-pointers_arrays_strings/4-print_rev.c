#include"main.h"
#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
*/
void print_rev(char *s)
{
	int n = 0;

	while (s[n])
		n++;
	while (n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
