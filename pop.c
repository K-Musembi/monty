#include "monty.h"

/**
 * pop - remove element at top
 * @stack: top element
 * @line_number: file line number
 *
 * Return: nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		top = *stack;
		if ((*stack)->next != NULL)
		{
			*stack = (*stack)->next;
			(*stack)->prev = NULL;
		}
		else
		{
			*stack = (*stack)->next;
		}
		free(top);
	}
}
