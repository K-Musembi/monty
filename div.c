#include "monty.h"

/**
 * _div - divide second element by top
 * @stack: head pointer
 * @line_number: file line number
 *
 * Return: nothing
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *top = NULL;
	int a, b, division;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	top = *stack;
	*stack = (*stack)->next;
	a = top->n;
	b = (*stack)->n;
	division = b / a;
	(*stack)->n = division;
	(*stack)->prev = NULL;
	free(top);
}
