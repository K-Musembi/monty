#include "monty.h"

/**
 * pint - print value at top
 * @stack: head pointer
 * @line_number: file line number
 *
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (*stack != NULL)
		printf("%d\n", (*stack)->n);
}
