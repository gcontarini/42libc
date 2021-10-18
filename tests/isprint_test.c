#include "../libft.h"
#include <stdio.h>

#include <ctype.h>

void	test(int c)
{
	printf("---- Input: %c ----\n", (unsigned char) c);
	printf("Result: %i\n", ft_isprint(c));
	printf("Result NOT: %i\n", isprint(c));
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
	test('<');
	test('$');
	test(127);
	test(155);
	return (0);
}
