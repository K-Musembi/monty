#include "monty.h"

/**
 * math_ops - check operation
 * @buf: string
 *
 * Return: operation
 */
instruction_t math_ops(char *buf)
{
	instruction_t operation;

	if (strcmp(buf, "div") == 0)
	{
		operation.opcode = "div";
		operation.f = _div;
	}
	else if (strcmp(buf, "mul") == 0)
	{
		operation.opcode = "mul";
		operation.f = mul;
	}
	else if (strcmp(buf, "mod") == 0)
	{
		operation.opcode = "mod";
		operation.f = mod;
	}
	return (operation);
}
