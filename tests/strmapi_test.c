#include "../libft.h"
#include <stdio.h>

static char	plus_index(unsigned int i, char c)
{
	return (c + i);
}

void	test(char const *s)
{
	char	*p;

	printf("INPUT: %s\n", s);
	p = ft_strmapi(s, plus_index);
	printf("RESULT: %s\n", p);
	printf("####################\n");
	free(p);
}

void	test_nullf(char const *s)
{
	char	*p;

	printf("INPUT FOR NULL: %s\n", s);
	p = ft_strmapi(s, 0);
	printf("RESULT: %s\n", p);
	printf("####################\n");
	free(p);
}

int	main(void)
{
	test("TEXTO");
	test("TEXTO MAIS LONGO");
	test(" ");
	test("");
	test(0);
	test_nullf("TEXTO");
	test_nullf("TEXTO MAIS LONGO");
	test_nullf(" ");
	test_nullf("");
	test_nullf(0);
	return (0);
}
