/*
 * File: 4-print_alphabt.c
 * Auth: Wendimu S. Tarekegn
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (hohe = 'a'; hohe <= 'z'; hohe++)
	{
		if (hohe != 'e' && hohe != 'q')
			putchar(hohe);
	}

	putchar('\n');

	return (0);
}		
