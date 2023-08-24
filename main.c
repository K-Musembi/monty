#include "monty.h"

/**
 * main - entry
 * @ac: number of arguments
 * @av: argument list
 *
 * Return: EXIT_SUCCESS
 */

char *data = NULL;

int main(int ac, char **av)
{
	int count;
	size_t n = 0;
	char *token1, *delim = " \t\n\b";
	char *buf = NULL;
	unsigned int line_number = 0;
	instruction_t operation;
	stack_t *stack = NULL;
	FILE *fptr;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(av[1], "r");
	if (fptr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	while ((count = getline(&buf, &n, fptr)) != -1)
	{
		line_number++;
		token1 = strtok(buf, delim);
		data = strtok(NULL, delim);
		operation = check_op(token1, line_number);
		operation.f(&stack, line_number);
		if (buf != NULL)
			buf = NULL;
		n = 0;
	}
	free_list(&stack);
	return (EXIT_SUCCESS);
}
