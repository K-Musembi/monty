#include "monty.h"

/**
 * add - adds top two elements
 * @stack: head pointer
 * @line_number: file line number
 *
 * Return: nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	int data1, data2, sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	top = *stack;
	*stack = (*stack)->next;
	data1 = top->n;
	data2 = (*stack)->n;
	sum = data1 + data2;
	(*stack)->n = sum;
	(*stack)->prev = NULL;
	free(top);
}
