#include"main.h"
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
*/
void rev_string(char *s)
{
	int n, m;
	char c;

	for (n = 0; s[n] != '\0'; n++)
		;
	for (m = 0; m < n / 2; m++)
	{
		c = s[m];
		s[m] = s[n - 1 - m];
		s[n - 1 - m] = c;
	}

}
