#include "monty.h"
/**
 * swap_func - entry point
 * @stack: stack head
 * @line_num: line_number
*/
void swap_func(stack_t **stack, unsigned int line_num)
{
	stack_t *h;
	int len = 0, counter;

	h = *stack;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	counter = h->n;
	h->n = h->next->n;
	h->next->n = counter;
}
