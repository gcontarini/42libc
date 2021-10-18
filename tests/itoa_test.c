#include "../libft.h"
#include <stdio.h>

void	test(int n)
{
	char	*p;

	printf("INPUT: %i\n", n);
	p = ft_itoa(n);
	printf("RESULT: %s\n", p);
	printf("####################\n");
	free(p);
}

int	main(void)
{
	test(0);
	test(10);
	test(10000);
	test(-10);
	test(-10000);
	test(2147483647);
	test(-2147483648);
	test(17);
	test(-17);
	test(3);
	test(-3);
	return (0);
}
