#include "printf.h"

/**
 * main - test function
 *
 * Return: 0 success
 */
int main(void)
{
	char c = 't';
	char cc = 's';
	char *s = "ss";
	char *ss = NULL;

	_printf("he%cllo, w%sorld%cWASSUP%s", c, s, cc, ss);
	printf("\n");
	printf("he%cllo, w%sorld%cWASSUP%s", c, s, cc, ss);
	printf("\n");
	return (0);
}
