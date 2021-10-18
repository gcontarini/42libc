#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int	i = 5;
	int	j = 7;
	int	k = 9;

	t_list	*start;
	t_list	*singleton;

	start = ft_lstnew(&i);
	start->next = ft_lstnew(&j);
	start->next->next = ft_lstnew(&k);
	printf("Size: %d\n", ft_lstsize(start));
	printf("No changes after using it: %d\n", ft_lstsize(start));
	printf("No segfault: %d\n", ft_lstsize(NULL));
	singleton = ft_lstnew(&i);
	printf("Size singleton: %d\n", ft_lstsize(singleton));
	free(singleton);
	free(start->next->next);
	free(start->next);
	free(start);
	return (0);
}
