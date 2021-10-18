#include "../libft.h"
#include <stdio.h>

void	test(int n)
{
	printf("INPUT: %i\n", n);
	ft_putnbr_fd(n, 1);
	write(1, "\n", 1);
	printf("#################\n");
}

int	main(void)
{
	test(0);
	test(1);
	test(-5);
	test(10000000);
	test(1001234123);
	test(2147483647);
	test(-2147483648);
	return (0);
}
