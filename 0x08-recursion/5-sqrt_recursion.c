#include "main.h"
/**
 *sqrt_check - checks for the square root of c
 *
 *@g:guess at sqrt
 *
 *@c: number to find sqrt of
 *
 *Return: -1 or sqrt of c
 */
int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

int _sqrt_recursion(int n)

/**
 *_sqrt_recursion - returns the natural square root of a number
 *
 *@n: integer to find sqrt o
 *
 *Return: natural square root or -1
 */
{

		if (n == 0)

					return (0);

			return (check(-1, n));

}
