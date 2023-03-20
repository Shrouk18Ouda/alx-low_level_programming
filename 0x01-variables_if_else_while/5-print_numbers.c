#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:print num from 0 to 9 with for
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	printf("%d", num);
	putchar('\n');
	return (0);
}
