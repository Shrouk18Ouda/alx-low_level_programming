#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:print nums with for
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 7; num++)
	{
		for (num2 = 0; num2 <= 8; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				if (num1 != num2 != num3 && num1 < num2 < num3)
				{
					putchar(num1 + 48);
					putchar(num2 + 48);
					putchar(num3 + 48);

					if (num1 + num2 + num3 < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
