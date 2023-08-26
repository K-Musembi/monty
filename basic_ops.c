#include "monty.h"

/**
 * basic_ops - check operation
 * @buf: string
 *
 * Return: operation
 */
instruction_t basic_ops(char *buf)
{
	instruction_t operation;

	if (strcmp(buf, "pop") == 0)
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
	else if (strcmp(buf, "sub") == 0)
	{
		operation.opcode = "sub";
		operation.f = sub;
	}
	return (operation);
}
