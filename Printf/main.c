/*main func*/
#include "ft_printf.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int n = 42;
	unsigned int u = 42;
	char c = 'c';
	char *s = "string";
	void *p = malloc(42);

	printf("printf:\n");
	printf("%%c: %c\n", c);
	printf("%%s: %s\n", s);
	printf("%%d: %d\n", n);
	printf("%%i: %i\n", n);
	printf("%%u: %u\n", u);
	printf("%%x: %x\n", u);
	printf("%%X: %X\n", u);
	printf("%%p: %p\n", p);

	printf("\nft_printf:\n");
	ft_printf("東京都文京区千駄木%d-%i-%u %% %p\n", 5, 10, 2, p);

	free(p);
	return (0);
}