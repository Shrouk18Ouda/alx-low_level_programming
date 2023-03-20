#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:print alphapet
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char SH, CH;

	for (SH = 'a'; SH <= 'z'; SH++)
		putchar(SH);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');
	return (0);
}

