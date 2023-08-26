#include "monty.h"

/**
 * pall - print all elements
 * @stack: stack head node
 * @line_number: file line number
 *
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	(void)line_number;

	if (*stack != NULL)
	{
		top = *stack;
		while (top)
		{
			printf("%d\n", top->n);
			top = top->next;
		}
	}
}
