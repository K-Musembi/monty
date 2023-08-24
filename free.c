#include "monty.h"

/**
 * free_list - free nodes
 * @stack: head pointer
 *
 * Return: nothing
 */
void free_list(stack_t **stack)
{
	stack_t *temp;

	while (*stack != NULL)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}
