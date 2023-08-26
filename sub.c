#include "monty.h"

/**
 * sub - subtract top element from second top
 * @stack: head pointer
 * @line_number: file line number
 *
 * Return: nothing
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int a, b, difference;
	stack_t *top = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	top = *stack;
	*stack = (*stack)->next;
	a = top->n;
	b = (*stack)->n;
	difference = b - a;
	(*stack)->n = difference;
	(*stack)->prev = NULL;
	free(top);
}
