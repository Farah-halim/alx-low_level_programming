#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 *
 * @filename: name
 * @text_content: what is writen
 *
 * Return: 1 and -1 if its fails
 */
int create_file(const char *filename, char *text_content)
{
	int fh;
	ssize_t wr;
	ssize_t n;

	if (!filename)
		return (-1);
	fh = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fh == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	n = strlen(text_content);
	wr = write(fh, text_content, n);
	if (wr == -1)
	{
		close(fh);
		return (-1);
	}
	close(fh);
	return (1);
}
