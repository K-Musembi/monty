#include "monty.h"

/**
 * swap - swap top two elements
 * @stack: top element
 * @line_number: file line number
 *
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	if ((*stack)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	top = (*stack)->next;
	(*stack)->next = top->next;
	top->next->prev = *stack;
	(*stack)->prev = top;
	top->next = *stack;
	top->prev = NULL;
}
