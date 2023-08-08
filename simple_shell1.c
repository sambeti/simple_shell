#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_COMMAND_LENGTH 100

/**
 * Main - Entry point
 *
 * Descrption: This program runs from command line
 *
 * Return: Always 0
 */

int main(void)
{
	char command[MAX_COMMAND_LENGTH];
	while (1)
	{
		printf("$ ");
		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			printf("\nExiting...\n");
			break;
		}
		command[strcspn(command, "\n")] = '\0';
		pid_t pid = fork();
		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			execlp(command, command, NULL);
			perror("execlp");
			exit(EXIT_FAILURE);
		}
		else
		{
			int status;
			waitpid(pid, &status, 0);
		}
	}
	return (0);
}
