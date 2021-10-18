#include "../libft.h"
#include <stdio.h>

void	test(int c)
{
	printf("INPUT: %c\n", c);
	printf("RESULT: %c\n", ft_toupper(c));
	printf("###########\n");
}

int	main(void)
{
	test('c');
	test('A');
	test('1');
	test('$');
	test('p');
	test('>');
	test(0);
	return (0);
}
