#include "monty.h"
#include <stdbool.h>

/**
 * is_valid_integer - entry point
 * @str: A constat string
 * @result: the result
 * Return: returns a boolean
 */

bool is_valid_integer(const char *str, int *result)
{
	char *endptr;
	long num = strtol(str, &endptr, 10);

	if (*endptr != '\0' || endptr == str)
		return (false);

	if (num > INT_MAX || num < INT_MIN)
	{
		fprintf(stderr, "Integer overflow/underflow\n");
		exit(EXIT_FAILURE);
	}

	*result = (int)num;
	return (true);
}
