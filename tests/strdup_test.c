#include "../libft.h"
#include <stdio.h>

void	test(const char *str)
{
	char	*p;

	printf("INPUT: %s\n", str);
	p = ft_strdup(str);
	printf("RESULT: %s\n", p);
	free(p);
}

int	main(void)
{
	test("TEXTO");
	test("");
	//test(0); Will segfault
	return (0);
}
