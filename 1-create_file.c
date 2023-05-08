#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: pointer file name
 * @text_content: what is writen in our file
 * Return: (1) and (-1) if its fails/errors
 */
int create_file(const char *filename, char *text_content)
{
        int fp;
        ssize_t wr, n;

        if (filename == NULL)
                return (-1);

        fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
        if (fp == -1)
                return (-1);

        if (!text_content)
                text_content = "";

        n = strlen(text_content);
        wr = write(fp, text_content, n);
        if (wr == -1)
	 {
                close(fp);
                return (-1);
        }
        close(fp);
        return (1);
}
