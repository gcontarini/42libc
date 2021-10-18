#include "../libft.h"
#include <stdio.h>

void	test(const char *hay, const char *needle, size_t n)
{
	char	*p;

	printf("INPUT: %s LOOK FOR %s IN %ld\n", hay, needle, n);
	p = ft_strnstr(hay, needle, n);
	printf("RESULT: %s\n", p);
	printf("##############################\n");
}

int	main(void)
{
	test("TEXTO TEXTAO GIGANTE", "GIGANTE", 21);
	test("TEXTO TEXTAO GIGANTE", "GIGANTE", 20);
	test("TEXTO TEXTAO GIGANTE", "GIGANTE", 5);
	test("TEXTO TEXTAO GIGANTE", "GIGANTE", 0);
	test("", "GIGANTE", 1);
	test("", "GIGANTE", 0);
	test("", "", 0);
	test("", "", 1);
	test("TEXTO", "", 0);
	test("TEXTO", "", 1);
	test(0, "", 0);
	test(0, "", 1);
	test(0, "TEXTO", 0);
	test("ABCDEFGH", "C", 8);
	test("ABCDEFGH", "C", 3);
	test("ABCDEFGH", "C", 2);
	//test(0, "TEXTO", 1); Will segfault
	//test(0, 0, 0); Will segfault
	return (0);
}
