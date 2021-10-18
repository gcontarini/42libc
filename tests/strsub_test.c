#include "../libft.h"
#include <stdio.h>

void	test(char const *s, unsigned int start, size_t len)
{
	char	*p;

	printf("INPUT: %s - at %i with %ld\n", s, start, len);
	p = ft_strsub(s, start, len);
	printf("RESULT: %s\n", p);
	printf("#############################\n");
	free(p);
}

int	main(void)
{
	test("TEXTO", 1, 4);
	test("TEXTO", 1, 5);
	test("TEXTO", 0, 5);
	test("TEXTO", 0, 6);
	test("TEXTO", 6, 6);
	test("TEXTO", 6, 0);
	test("", 0, 0);
	test("", 0, 1);
	test(0, 0, 1);
	test(0, 0, 0);
	test(0, 1, 0);
	return (0);
}
