#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename:its our filenname
 * @letters:number of letters in the file which will be reade / print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t re, wr, ox;

	if (filename == NULL || letters == 0)
		return (0);

	ox = open(filename, O_RDONLY);
	if (ox == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);
	re = read(ox, buffer, letters);
	if (re == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, re);
	free(buffer);
	close(ox);
	if (re != wr)
		return (0);
	return (wr);
}
