#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_loop - Run an infinite while loop.
 *
 * Return: 0
 */


int infinite_loop(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}


/**
 * main - Creates five zombie processes.
 *
 * Return: 0.
 */


int main(void)
{
	pid_t pid;
	char i = 0;

	while (i < 5)
	{
		pid = fork();
		if (pid > 0)
		{
			printf("Zombie process created, PID: %d\n", pid);
			sleep(1);
			i++;
		}
		else
			exit(0);
	}

	infinite_loop();

	return (EXIT_SUCCESS);
}
