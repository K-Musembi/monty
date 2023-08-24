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
	stack_t *top;

	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *stack;
	printf("%d\n", top->n);
}
