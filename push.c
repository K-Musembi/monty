#include "monty.h"

/**
 * push - push to stack
 * @stack: node
 * @line_number: file line number
 *
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	int num;

	if (data != NULL && *data == '-')
	{
		data++;
		num = atoi(data);
		num = -num;
	}
	else if (data == NULL || !isdigit(*data))
	{
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		num = atoi(data);

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = num;
	node->prev = NULL;
	if (*stack == NULL)
	{
		node->next = NULL;
		*stack = node;
	}
	else
	{
		node->next = *stack;
		(*stack)->prev = node;
		*stack = node;
	}
}
