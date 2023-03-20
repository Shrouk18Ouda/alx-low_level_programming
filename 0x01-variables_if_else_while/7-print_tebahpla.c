#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:prints alphapets
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char sh;

	for (sh = 'z'; sh >= 'a'; sh--)
		putchar(sh);
	putchar('\n');
	return (0);
}
