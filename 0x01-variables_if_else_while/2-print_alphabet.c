#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:print a b c d .....z
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char CC;

	for (CC = 'a'; CC <= 'z'; ++CC)
	putchar(CC);
	return (0);
}
