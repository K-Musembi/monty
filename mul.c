#include "monty.h"

/**
 * mul - multiplies top two elements
 * @stack: head pointer
 * @line_number: file line number
 *
 * Return: nothing
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *top = NULL;
	int a, b, result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	top = *stack;
	*stack = (*stack)->next;
	a = top->n;
	b = (*stack)->n;
	result = b * a;
	(*stack)->n = result;
	(*stack)->prev = NULL;
	free(top);
}
