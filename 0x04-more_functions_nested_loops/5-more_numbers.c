#include "main.h"
/**
 * more_numbers - print numfrom 0 to 14 10times
 *
 * return: void
*/
void more_numbers(void)
{
	char c, s, num;

	for (s = 1; s < 11; s++)
	{
		for (c = 0; c < 15; c++)
		{
			num = c;
			if (c >= 10)
			{
				_putchar(1 + 48);
				num = c % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
