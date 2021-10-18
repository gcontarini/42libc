#include "../libft.h"
#include <stdio.h>

void	test(int i)
{
	t_list	*node;

	node = ft_lstnew(&i);
	printf("TEST: %d\n", *(int *) node->content);
	free(node);
	printf("##########\n");
}

int	main(void)
{
	test(10);
	test(0);
	test(25);
	return (0);
}
