#include "../libft.h"

void	test(char c)
{
	ft_putchar_fd(c, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	test('a');
	test('5');
	test('\x0');
	test(0);
	test(48);
	return (0);
}
