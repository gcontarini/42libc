#include "../libft.h"
#include <stdio.h>

void	test(int c)
{
	printf("---- Input: %c ----\n", (unsigned char) c);
	printf("Result: %i\n", ft_isalpha(c));
	printf("------------------\n");
}

int	main(void)
{
	test('a');
	test('Z');
	test('5');
	test(52);
	test(0);
	test(-42);
	return (0);
}
