#include "monty.h"

/**
 * extract_argument - entry point
 * @instruction_line: actual line parsing
 * Return: return a char
 */

char *extract_argument(const char *instruction_line)
{
	const char *arg_start = instruction_line + strlen("push");

	while (*arg_start != '\0' && (*arg_start == ' ' || *arg_start == '\t'))
		arg_start++;

	return ((char *)arg_start);
}
