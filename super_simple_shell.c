#include "sss.h"

/**
 * main - entry point for shell
 *
 * @argc: Number of inputted arguments
 * @argv: Vector containing each argument
 * @envp: Environmental variables
 *
 * Return: 1 on success, all other returns are failures
 */

int main(int argc, char **argv, char **envp)
{
	char *userInput = NULL;
	char **commandArgs = NULL;

	if (argc > 1 && argv)
	{
		luma();
	}

	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("$ ");
		userInput = readline();

		if (!userInput)
		{
			perror("readline failed");
			free(userInput);
			exit(EXIT_FAILURE);
		}

		if (strcmp(userInput, "exit") == 0)
		{
			free(userInput);
			exit(EXIT_SUCCESS);
		}
		else if (strcmp(userInput, "") == 0)
		{
			printf("%s", userInput);
		}
		else
		{
			commandArgs = tokenize(userInput, " ");
			print_array(commandArgs);
			if (fork_process(commandArgs, envp) == 1)
			{
				free(userInput);
				exit(EXIT_FAILURE);
			}
		}
		free_array(commandArgs);
	}
}
