#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: characters
 * Description: Look up man strlen for reference
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	return (len);
}

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 * Description: 1. Under the snow
 * Return: see below
 * 1. if successful, 1
 * 2. if fail, -1
 * 3. if filename is NULL, -1
 */
int create_file(const char *filename, char *text_content)
{
	/* declare variable for new file */
	int newfile;
	/* declare variables to check if close and/or write fails */
	int check_c, check_w;
	/* requirement: if filename is NULL, return -1 */
	if (filename == NULL)
		return (-1);
	/* create new file and if it fails, return -1 */
	newfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (newfile == -1)
		return (-1);
	/* requirement: if text_content is NULL, create empty file */
	if (text_content == NULL)
		return (1);
	/* write into new file and if it fails, return -1 */
	check_w = write(newfile, text_content, _strlen(text_content));
	if (check_w == -1 || check_w != _strlen(text_content))
		return (-1);
	/* close new file and if it fails, return -1 */
	check_c = close(newfile);
	if (check_c == -1)
		return (-1);
	/* return 1 if successful */
	return (1);
}
