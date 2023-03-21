#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:use 2 loops
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 8; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);

			if (num1 < 8 && num2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
