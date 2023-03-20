#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:print alphapets except some with for
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char SH;

	for (SH = 'a'; SH <= 'z'; SH++)
		if (SH != 'q' && SH != 'p')
		{
			putchar(SH);
		}
	return (0);
}
