#include "shell.h"

/**
 * main - a function that has an infinite loop
 * @ac: No use
 * @av: No use
 * Return: loop.
 **/
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
