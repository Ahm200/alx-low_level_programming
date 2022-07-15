#include "main.h"
#include <stdio.h>

/**
 *_strlen - return the length of a string
 * @s:pointer to the sting character
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int strlength;

	strlength = 0;
	while (*(s + strlength) != '\0')
		strlength++;
	return (strlength);
}
