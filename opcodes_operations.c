#include "monty.h"

/**
 * push_func - pushes an element to the stack
 * @stack: stack
 * @line_number: line number
 */

void push_func(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	(void) line_number;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = global_var;
	new->prev = NULL;

	if (*stack == NULL)
	{
		new->next = NULL;
		*stack = new;
		return;
	}
	new->next = *stack;
	(*stack)->prev = new;
	*stack = new;
}

/**
 * pall_func - prints all the values on the stack, starting from the top
 * @stack: stack
 * @line_number: line number
 */

void pall_func(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	(void) line_number;
	temp = *stack;
	if ((*stack) == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
