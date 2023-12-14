#include "monty.h"

/**
 * push_func - entry point
 * @stack: the stack
 * @line_num: the line number
 */

void push_func(stack_t **stack, unsigned int line_num, const char *instruction_line)
{
	char *arg;
	int value;
	stack_t *new_node;

	arg = extract_argument(instruction_line);

	if (!arg || !is_valid_integer(arg, &value))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}

	value = atoi(arg);

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}
