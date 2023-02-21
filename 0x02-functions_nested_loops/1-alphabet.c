/*
 * File: 1-alphabet.c
 * Author: Wendimu S. Tarekegn
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char hohe;

	for (hohe = 'a'; hohe <= 'z'; hohe++)
		_putchar(hohe);

	_putchar('\n');
}
