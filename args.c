include "shell.h"

int main(int args, char *argv[])
{
	printf("Hi there\n");
	
	//executing an ls command
	char* argv2[] = {"ls", "-la", NUKK};
	execvp(aegv2[0], argv2);
	
	printf(".. and done!");
}
