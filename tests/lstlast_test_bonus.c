#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int	i = 5;
	int	j = 7;
	int	k = 9;

	t_list	*start;

	start = ft_lstnew(&i);
	printf("Last element value: %d\n", *(int *)  ft_lstlast(start)->content);
	start->next = ft_lstnew(&j);
	start->next->next = ft_lstnew(&k);
	printf("Last element value after adding: %d\n", *(int *)  ft_lstlast(start)->content);
	ft_lstlast(NULL);
	free(start->next->next);
	free(start->next);
	free(start);
	return (0);
}
