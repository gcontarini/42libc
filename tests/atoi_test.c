#include "../libft.h"
#include <stdio.h>

void	test(const char *str)
{
	printf("INPUT: %s\n", str);
	printf("RESULT: %i\n", ft_atoi(str));
	printf("#############################\n");
}

int	main(void)
{
	test("0");
	test("42");
	test("asdfasdf");
	test("+141231");
	test("++141231");
	test("-141231");
	test("-+141231");
	test("    +141231");
	test("    +141231aaa14123");
	test("    --141231aaa14123");
	test("    --141231aaa14123");
	test("2147483647");
	test("-2147483648");
	test("\t -2147483648");
	test("\x09 -2147483648");
	test("");
	//test(0); Will segfault
	return (0);
}
