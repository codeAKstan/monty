#include "monty.h"

/**
 * pall_func - entry point
 * @stack: the stack
 * @line_num: line number
 */

void pall_func(stack_t **stack, unsigned int line_num)
{
	stack_t *current = *stack;
	(void)line_num;

	if (current == NULL)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
