#include "monty.h"

/**
 * check_op - check operation
 * @buf: string
 * @line_number: file line number
 *
 * Return: nothing
 */
instruction_t check_op(char *buf, unsigned int line_number)
{
	instruction_t operation;

	if (strcmp(buf, "push") == 0)
	{
		operation.opcode = "push";
		operation.f = push;
	}
	else if (strcmp(buf, "pall") == 0)
	{
		operation.opcode = "pall";
		operation.f = pall;
	}
	else if (strcmp(buf, "pint") == 0)
	{
		operation.opcode = "pint";
		operation.f = pint;
	}
	else if (strcmp(buf, "pop") == 0)
	{
		operation.opcode = "pop";
		operation.f = pop;
	}
	else if (strcmp(buf, "swap") == 0)
	{
		operation.opcode = "swap";
		operation.f = swap;
	}
	else if (strcmp(buf, "add") == 0)
	{
		operation.opcode = "add";
		operation.f = add;
	}
	else if (strcmp(buf, "nop") == 0)
	{
		operation.opcode = "nop";
		operation.f = nop;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", line_number, buf);
		exit(EXIT_FAILURE);
	}
	return (operation);
}
