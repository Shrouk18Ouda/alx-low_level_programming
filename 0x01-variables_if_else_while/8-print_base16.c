#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:prints nums from 0 to 9 and letters from a to f
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char num, ch;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
