#include "main.h"
/**
* puts2 - print one char out of 2 of a string
*@str: string to print
*Return: Nothing
*/
void puts2(char *str)
{
	int length;
	char l;

	for (length = 0; *(str + length) != 0; length++)
	{
		if (length % 2 == 0)
		{
			l = *(str + length);
			_putchar(l);
		}
	}
	_putchar('\n');
}
