#include "main.h"

/**
 * create_file - creates a file and adds permission to it
 * @filename: The name of the file to be created
 * @text_content: content to be placed in the created file
 * Return: 1 if successfull and -1 on err.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, rwr, nletters = 0;
	
	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);
	return (1);
}
