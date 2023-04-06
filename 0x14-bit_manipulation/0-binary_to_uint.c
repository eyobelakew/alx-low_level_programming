#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to decimal
 * @b: string of binary number
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result <<= 1;
		if (*b == '1')
			result += 1;

		b++;
	}

	return (result);
}
