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
	int num;

	for (num = 48; num <= 57; num++)
		putchar(num);
	if (num != 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
