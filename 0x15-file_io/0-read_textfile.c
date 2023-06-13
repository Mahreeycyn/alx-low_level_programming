#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - text file print to be read to STDOUT
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: w- read and print the actual number of bytes
 * 0 when functions fails or filename is NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}

