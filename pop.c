#include "monty.h"
/**
 * pop_func - entry point
 * @stack:the stack head
 * @line_num: line_number
*/
void pop_func(stack_t **stack, unsigned int line_num)
{
	stack_t *h;

	if (*stck == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	*stack = h->next;
	free(h);
}
