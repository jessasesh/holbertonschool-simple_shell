#include "sss.h"
/**
 * print_array - Prints the elements of an array of strings
 * @array: array of strings to be printed
 */
void print_array(char **array)
{
	int i;

	printf("===print_array===\n");

	if (array)
	{
		for (i = 0; array[i] != NULL; i++)
		{
			printf("%s\n", array[i]);
		}
	}
	printf("===print_array===SUCCESS\n");
}
