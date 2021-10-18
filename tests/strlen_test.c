#include "../libft.h"
#include <stdio.h>

void	test(char *s)
{
	printf("---- Word: %s ----\n", s);
	printf("Result: %ld\n", ft_strlen(s));
	printf("--------------------------\n");
}

int	main(void)
{
	test("TEXTO");
	test("1");
	test("");
	test("MUITO LONGO ESSE TEXTO");
	test("Caracteres especiais !@$$!#@");
	test("-123123 253453e gsdfgsdf");
	return (0);
}
