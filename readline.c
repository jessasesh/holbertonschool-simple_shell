#include "sss.h"
#include <stdio.h>

/**
 * readline - Reads user input from stdin
 *
 * Return: A string containing bytes from stdin, or NULL on failure
 */

char *readline(void)
{
	int bytesRead;
	size_t size = 32;

	char *buffer = NULL;

	bytesRead = getline(&buffer, &size, stdin);

	if (bytesRead == -1)
	{
		fprintf(stderr, "Error reading input\n");
		free(buffer);
		return (NULL);
	}

	buffer[strlen(buffer) - 1] = '\0';
	return (buffer);
}
