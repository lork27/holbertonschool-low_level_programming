#include "main.h"

/**
 *read_textfile - reads textfile and prints it to POSIX
 *@filename: name of the file to be printed
 *@letters: number of letters it should read and print
 *Return: Number of letters read and printed, 0 if it cannot
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *strbuf;

	if (filename == NULL)
		return (0);
	strbuf = malloc(sizeof(char) * letters);
	if (strbuf == NULL)
		return (0);
	opn = open(filename, O_RDONLY);
	rd = read(opn, strbuf, letters);
	wrt = write(STDOUT_FILENO, strbuf, rd);
	if (opn == -1 || rd == -1 || wrt == -1)
		return (0);
	free(strbuf);
	close(opn);
	return (wrt);
}
