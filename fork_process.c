#include "sss.h"

/**
* fork_process - forks process and executes a command.
* @tokens: array of strings command and its arguments.
* @environ: array of strings environmental variables
* Return: 0 on success, 1 on failure.
*/

int fork_process(char **tokens, char **environ)
{
	pid_t mypid;
	int status;

	char *pathName = tokens[0];

	mypid = fork();

	if (mypid == -1)
	{
		perror("Unable to fork");
		/*printf("==Terminating shell==\n");*/
		return (1);
	}
	if (mypid == 0)
	{
		environ = tokenize_path(environ);
		pathName = assemble_path(environ, pathName);
		if (execve(pathName, tokens, environ) == -1)
		{
			perror("Unable to execute command");
			exit(EXIT_FAILURE);
		}
		exit(EXIT_SUCCESS);
	}
	if (mypid)
	{
		wait(&status);
		return (0);
	}
	return (1);
}
