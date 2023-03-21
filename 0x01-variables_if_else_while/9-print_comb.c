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

	for (num = 0; num <= 9; ++num)
	{
		putchar(num + 48);
	if (num < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

