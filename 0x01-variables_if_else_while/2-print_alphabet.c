/*
 * File: 2-print_alphabet.c
 * Author: Wendimu S. Tarekegn
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char hohe;

	for (hohe = 'a'; hohe <= 'z'; hohe++)
		putchar(hohe);

	putchar('\n');

	return (0);
}
