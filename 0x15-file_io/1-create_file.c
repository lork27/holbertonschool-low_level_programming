#include "main.h"

/**
 *create_file - creates a file
 *@filename: name of the file to be created
 *@text_content: NULL terminated string to write to the file
 *Return: 1 success, -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, r, w;

	if (text_content == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_RDWR, 0600);
	r = read(o, text_content, strlen(text_content));
	w = write(STDOUT_FILENO, text_content, r);
	if (o == -1 || r == -1 || w == -1)
		return (-1);
	close(o);
	return (1);

}
