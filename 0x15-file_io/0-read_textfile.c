#include "main.h"

/**
* read_textfile - function that reads text file and prints to standard output
* @filename: text file
* @letters: number of letters it should read and print
* Description: 0. Tread lightly, she is near
* Return: see below
* 1. if successful, actual number of letters
* 2. if fail because file can't be opened or read, 0
*/

ssize_t read_textfile(const char *filename, size_t letters)

{
/* declare variable for file descriptor */
int fd;
/* declare variables to check if close, read or write fails */
ssize_t check_c, check_r, check_w;
/* allocate memory for buffer */
char *buf = malloc(sizeof(char) * (letters));
/* requirement: if filename is NULL, return 0 */
if (filename == NULL)
return (0);
/* open file but if it fails or empty, return 0 */
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
/* read file but if it fails, return 0 */
check_r = read(fd, buf, letters);
if (check_r == -1)
return (0);
/* write text to standard output but if it fails, return 0 */
check_w = write(STDOUT_FILENO, buf, check_r);
if (check_w == -1)
return (0);
/* close file but if it fails, return 0 */
check_c = close(fd);
if (check_c == -1)
return (0);
/* requirement: if successful, return actual number of letters */
return (check_r);
}
