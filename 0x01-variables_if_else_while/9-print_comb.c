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
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar('\t');
		}
		num++;
	}
	putchar('\n');
}
