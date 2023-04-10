#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @main_text: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *main_text)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (main_text != NULL)
	{
		for (len = 0; main_text[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, main_text, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
