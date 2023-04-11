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

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 if an error occurred.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t n, m;
    char *buffer;
    int fd;

    if (filename == NULL)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        free(buffer);
        return (0);
    }

    n = read(fd, buffer, letters);
    if (n == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    m = write(STDOUT_FILENO, buffer, n);
    if (m == -1 || m != n)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);

    return (n);
}