#include "main.h"
/**
 * main - Entry point
 *
 * Description:print putchar
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char name[] = "_putchar";
	int sh;

	for (sh = 0; sh < 8; sh++)
		_putchar(name[sh]);
	_putchar('\n');
	return (0);
}
