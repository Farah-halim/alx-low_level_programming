#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: arguement count
 * @argv: arguement vector
 * Return: in success return 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, n;
	char buffer[1024];

	if (ac != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	while ((n = read(file_from, buffer, 1024)))
	{
		if (file_from == -1 || n == -1)
		{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
		if (write(file_to, buffer, n) == -1 || file_to == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}
	if (close(file_from) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		return (100);
	}
	if (close(file_to) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		return (100);
	}
	return (0);
}
