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
		operation = basic_ops(buf);
	else if (strcmp(buf, "swap") == 0)
		operation = basic_ops(buf);
	else if (strcmp(buf, "add") == 0)
		operation = basic_ops(buf);
	else if (strcmp(buf, "nop") == 0)
		operation = basic_ops(buf);
	else if (strcmp(buf, "sub") == 0)
		operation = basic_ops(buf);
	else if (strcmp(buf, "div") == 0)
		operation = math_ops(buf);
	else if (strcmp(buf, "mul") == 0)
		operation = math_ops(buf);
	else if (strcmp(buf, "mod") == 0)
		operation = math_ops(buf);
	else
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", line_number, buf);
		exit(EXIT_FAILURE);
	}
	return (operation);
}
