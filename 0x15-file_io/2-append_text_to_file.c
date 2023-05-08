#include "main.h"
/**
 * append_text_to_file - function that creates a file if it doesnt exist.
 * @filename: the name of the file
 * @text_content: the text in the file
 * Return: (1) on success, (-1) on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int h, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
		length = strlen(text_content);
	h = open(filename, O_WRONLY | O_APPEND);
	if (h == -1)
		return (-1);

	if (write(h, text_content, length) == -1 && !close(h))
		return (-1);
	return (1);
}
