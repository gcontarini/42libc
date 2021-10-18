#include "../libft.h"
#include <stdio.h>

void	test(char const *s1, char const *s2)
{
	char	*p;

	printf("INPUTS: %s - %s\n", s1, s2);
	p = ft_strjoin(s1, s2);
	printf("RESULT: %s\n", p);
	printf("######################\n");
	free(p);
}

int	main(void)
{
	test("UM TEXTO LONGO", "OUTRO TEXTO");
	test("", "TEXTO");
	test("TEXTO", "");
	test("", "");
	test(0, "");
	test(0, "TEXTO");
	test("", 0);
	test("OUTRO", 0);
	test(0, 0);
	return (0);
}
