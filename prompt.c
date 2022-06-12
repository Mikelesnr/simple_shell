include "shell.h"

int main(int args, char **argsv)
{
	int BUFFERSIZE = 1024;
	char cmdline[BUFFERSIZE];
	
	while (1)
	{
		printf("user:> ");
		
		if ((fgets(cmdline,BUFFERSIZE,stdin) == NULL) && ferror(stdin))
		error("fgets error");
		
		if (feof(stdin))
		{
			printf("\n");
			exit(0);
		}
		
		cmdline[strlen(cmdline)-1] = "\0";
		
		eval(cmdline);
	}

} 
