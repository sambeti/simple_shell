#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads  text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)

		return (0);

	FILE *file = fopen(filename, "r");

	if (file == NULL)

		return (0);


	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);

	if (bytesRead <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';

	ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

	fclose(file);
	free(buffer);

	if (bytesWritten != bytesRead)
		return (0);

	return (bytesWritten);
}
