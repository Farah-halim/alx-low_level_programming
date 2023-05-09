#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: argument for count
 * @argv: arguments vactor
 * Return:(0) success Otherwise failed
 */
int main(int argc, char **argv)
{
	int fp;

	if (ac != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}
	exit(98);
}
