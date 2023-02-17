/*
 * File: 3-print_alphabets.c
 * Author: Wendimu S. Tarekegn
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char hohe;

	for (hohe = 'a'; hohe <= 'z'; hohe++)
		putchar(hohe);

	for (hohe = 'A'; hohe <= 'Z'; hohe++)
		putchar(hohe);

	putchar('\n');

	return (0);
}
