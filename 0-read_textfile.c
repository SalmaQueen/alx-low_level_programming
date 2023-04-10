#include "main.h"

/**
 *read_textfile-Function that does read a file
 *@filename:This is filename
 *@letters: size of the buffer
 *Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        int fd, n, w;
        char buffer[1024];

        if (filename == NULL)
        {
                return (0);
        }
        fd = open(filename, O_RDWR);
        if (fd == -1)
        {
                return (0);
        }

        n = read(fd, buffer, letters);

        if (n == -1)
                return (0);
        w = write(STDOUT_FILENO, buffer, n);

        if (w == -1 || w != n)
                return (0);

        close(fd);
        return (w);
}
