#include "../libft.h"

void	test(char const *str)
{
	ft_putendl_fd(str, 1);
}

int	main(void)
{
	test("UM TEXTO");
	test("123132123\t");
	test("");
	test(0);
	return (0);
}
