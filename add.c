#include "monty.h"
/**
 * add_func - Entry point
 * @stack: stack head
 * @line_num: line_number
*/
void add_func(stack_t **stack, unsigned int line_num)
{
	stack_t *h;
	int len = 0, current;

	h = *stack;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	current = h->n + h->next->n;
	h->next->n = current;
	*stack = h->next;
	free(h);
}
