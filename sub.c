#include "monty.h"
/**
  *sub_func-entry point
  *@stack: stack head
  *@line_num: line_number
 */
void sub_func(stack_t **stack, unsigned int line_num)
{
	stack_t *current;
	int min, nodes;

	current = *stack;
	for (nodes = 0; current != NULL; nodes++)
		current = current->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	min = current->next->n - current->n;
	current->next->n = min;
	*stack = current->next;
	free(current);
}
