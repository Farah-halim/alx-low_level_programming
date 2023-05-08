#include "main.h"
#include <string.h>
/**
 * create_file -> creates a file
 * @filename:the name of pointer file
 * @text_content:what is written in the file
 * Return:(1)and(-1)when it fails
 */
int create_file(const char *filename, char *text_content)
{
	int file, i, w = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		w = write(file, text_content, i);
		if (w == -1)
			return (-1);
	}
	close(file);
	return (1);
}
