#include "main.h"
/**
 * more_numbers - print numfrom 0 to 14 10times
 *
 * return: void
*/
void more_numbers(void)
{
	char c, s;

	for (s = 0; s < 11; s++)
	{
		for (c = 0; c < 15; c++)
		{
			_putchar(c + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
