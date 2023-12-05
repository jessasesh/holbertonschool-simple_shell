#include "sss.h"

/**
 * value_from_environ - Splits the key from the value in env var
 *
 * @envVar: Variable to split
 *
 * Retufn: Value (string) from the env var
 */

char *value_from_environ(char *envVar)
{

	if (!envVar)
	{
		return (NULL);
	}

	while (*envVar != '=')
	{
		envVar++;
	}
	envVar++;

	return (envVar);
}
