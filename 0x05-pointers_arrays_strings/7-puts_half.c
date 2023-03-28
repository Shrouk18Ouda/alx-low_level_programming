#include"main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
*/
void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		;
	n++;
		for (n /= 2; str[n] != '\0'; n++)
		{
			putchar(str[n]);
		}
	putchar('\n');
}
