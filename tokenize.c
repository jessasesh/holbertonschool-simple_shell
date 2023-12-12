#include "sss.h"

/**
 * tokenize - Converts input string into an array of strings
 *
 * @str: String to convert
 * @delim: Delimiter byte to parse str with
 *
 * Return: Array of strings on success, else NULL
 */

char **tokenize(char *str, char const *delim)
{
	int i;
	int countDelims = 0;
	char *token = NULL;
	char **tokens = NULL;

	if (!str || !delim)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == *delim)
		{
			countDelims++;
		}
	}

	tokens = malloc(sizeof(char *) * (countDelims + 2));

	token = strtok(str, delim);

	for (i = 0; token; i++)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
	}

	tokens[i] = NULL;

	for (i = 0; tokens[i] != NULL; i++)
	{
		printf("token[%i]: %s\n", i, tokens[i]);
	}
	return (tokens);
}
