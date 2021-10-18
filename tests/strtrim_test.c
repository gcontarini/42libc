#include "../libft.h"
#include <stdio.h>

void	test(char const *str, char const *set)
{
	char	*p;

	printf("INPUT: %s - remove %s\n", str, set);
	p = ft_strtrim(str, set);
	printf("RESULT: %s\n", p);
	printf("#########################\n");
	free(p);
}

int	main(void)
{
	test("www.teste.com", "w. ");
	test("AAATEXTOAAA", "Aa");
	test("AAATEXTOAAA", "AXTO");
	test("AAATEXTOBBB", "AXTOB");
	test("AAATEXTOBBB", "AXB");
	test("   OK    a", "a ");
	test(".. .TEXTO.. .", ". ");
	test(".. .TEXTO.. .", "");
	test(".. .TEXTO.. .", 0);
	test("", "#.");
	test(0, "#.");
	test("", "");
	test(0, 0);
	return (0);
}
