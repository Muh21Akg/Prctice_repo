#include "main.h"

/**
 * main - test function
 *
 * Return: 0 success
 */
int main(void)
{
	unsigned int y = 98;
	char c = 't';
	char cc = 's';
	char *s = "ss";
	char *ss = NULL;
	char *st = "abcde";
	int x = 8848;
	int i, j;

	i = _printf("%u%o%ihe%cllo%%, w%sorld%cWAS%sSUP%s\n", y, y, x, c, s, cc, st, ss);
	printf("\n");
	j = printf("%u%o%ihe%cllo%%, w%sorld%cWAS%sSUP%s\n", y, y, x, c, s, cc, st, ss);
	printf("\n");
	printf("ours: %d\nlib: %d\n", i, j);
	return (0);
}
