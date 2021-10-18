#include "../libft.h"

void	test(char const *str)
{
	ft_putstr_fd(str, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	test("UM TEXTO");
	test("123132123\t");
	test("");
	test(0);
	return (0);
}
