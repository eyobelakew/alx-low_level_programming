#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the name of the file to read
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t nread;
    char *buf;

    if (!filename)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * (letters + 1));
    if (!buf)
        return (0);

    nread = read(fd, buf, letters);
    if (nread == -1)
    {
        free(buf);
        return (0);
    }

    buf[nread] = '\0';
    printf("%s", buf);

    free(buf);
    close(fd);

    return (nread);
}

/**
 * create_file - Creates a file and writes text to it
 * @filename: Pointer to the name of the file to create
 * @text_content: Pointer to a null terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t nwrite = 0, len = 0;

    if (!filename)
        return (-1);

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    if (text_content)
    {
        while (text_content[len])
            len++;

        nwrite = write(fd, text_content, len);
        if (nwrite == -1 || nwrite != len)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Pointer to the name of the file to append to
 * @text_content: Pointer to a null terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t nwrite = 0, len = 0;

    if (!filename)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content)
    {
        while (text_content[len])
            len++;

        nwrite = write(fd, text_content, len);
        if (nwrite == -1 || nwrite != len)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
