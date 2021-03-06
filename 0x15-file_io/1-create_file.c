#include "main.h"

/**
 *create_file - creates a file
 *@filename: name of the file to be created
 *@text_content: NULL terminated string to write to the file1
 *Return: 1 success, -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
	{
		i++;
	}
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);


	close(fd);
	return (1);

}
