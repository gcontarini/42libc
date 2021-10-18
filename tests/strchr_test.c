#include "../libft.h"
#include <stdio.h>

void	test(char *str, int c)
{
	char	*p;

	printf("INPUT: %s - %c\n", str, c);
	p = ft_strchr(str, c);
	if (p) printf("RESULT: %s - %c\n", p, *p);
	else printf("RESULT: NULL\n");
	printf("#############\n");
}

int	main(void)
{
	test("TEXTO", 'X');
	test("TEXTO", 'T');
	test("TEXTO", 'a');
	test("TEXTO", 'e');
	test("TEXTO", 0);
	test("", 'e');
	test("AAAA", 'e');
	test("", 0);
	test("\x17", '\x17');
	//test(0, 0); Will segfault
	return (0);
}
