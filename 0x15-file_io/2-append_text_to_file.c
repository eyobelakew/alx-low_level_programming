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
 * append_text_to_file - function that appends text to a file
 * @filename: name of file
 * @text_content: NULL terminated string to append to file
 * Description: 2. Speak gently, she can hear
 * Return: see below
 * 1. if successful, 1
 * 2. if fail, -1
 * 3. if filename is NULL, -1
 * 4. if text_content is NULL & file exists, return 1
 * 5. if text_content is NULL, file doesn't exists & no permissions, return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/* declare variable for file descriptor */
	int fd;
	/* declare variables to check if close and/or write fails */
	int check_c, check_w;
	/* requirement: if filename is NULL, return -1 */
	if (filename == NULL)
		return (-1);
	/* open file and if it fails, return -1 */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	/* requirement: if text_content is NULL, create and return empty file */
	if (text_content == NULL)
		return (1);
	/* write string to file and if it fails, return -1 */
	check_w = write(fd, text_content, _strlen(text_content));
	if (check_w == -1 || check_w != _strlen(text_content))
		return (-1);
	/* close file and if it fails, return -1) */
	check_c = close(fd);
	if (check_c == -1)
		return (-1);
	/* return 1 if successful */
	return (1);
}
