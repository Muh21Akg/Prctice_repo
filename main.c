#include "main.h"

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
	char *st = "esrever";

	_printf("he%cllo%%, w%sorld%cWAS%sSUP%s", c, s, cc, st, ss);
	printf("\n");
	printf("he%cllo%%, w%sorld%cWAS%sSUP%s", c, s, cc, st, ss);
	printf("\n");
	return (0);
}
