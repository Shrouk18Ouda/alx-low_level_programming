#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:A C program that prints nums
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		putchar(',');
		putchar('\t');
	}
	putchar('\n');
	return (0);
}
