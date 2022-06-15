include "shell.h"

int main ()
{
	pid_t childPid;
	printf("Before fork %d\n", getpid());

	//fork creates a child and returns its process id
	childPid = fork();

	printF("After fork %d\n", getpid())
		exit(0);
}
