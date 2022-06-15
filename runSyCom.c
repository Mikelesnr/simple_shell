include "shell.h"

void runSystemCommand(struct command *cmd, int bd)
{
	pid_t childPid;

	if ((childPid = fork()) < 0)
		error("fork() error");
	else if (childPid == 0)
	{
		if (execvp(cmd->argv[0], cmd -> argv) < 0)
		{
			printf("%s: Command not found\n", cmd->argv[0]);
			exit(0);
		}
	}
	else
	{
		if(bg)
			pintf("Child in background [%d]", childPid);
		else
			wair(&childPid)
	}
}
