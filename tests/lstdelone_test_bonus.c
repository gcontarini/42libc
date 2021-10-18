#include "../libft.h"
#include <stdio.h>

void	set_int_zero(void *n)
{
	int	*p;

	p = (int *) n;
	*p = 0;
}

int	main(void)
{
	int	i = 5;
	int	j = 7;
	int	k = 9;

	t_list	*start;
	t_list	*null_node;
	t_list	*null_node_content;

	start = ft_lstnew(&i);
	start->next = ft_lstnew(&j);
	start->next->next = ft_lstnew(&k);
	printf("Third: %d\n", *(int *)  start->next->next->content);
	printf("Second: %d\n", *(int *)  start->next->content);
	printf("First: %d\n", *(int *)  start->content);
	printf("---> Start release <---\n");
	ft_lstdelone(start->next->next, set_int_zero);
	printf("Third: %d\n", *(int *)  start->next->next->content);
	ft_lstdelone(start->next, set_int_zero);
	printf("Second: %d\n", *(int *)  start->next->content);
	ft_lstdelone(start, set_int_zero);
	printf("First: %d\n", *(int *)  start->content);
	printf("NO SEGFAULT?");
	null_node = NULL;
	ft_lstdelone(null_node, set_int_zero);
	ft_lstdelone(null_node, NULL);
	null_node_content = ft_lstnew(NULL);
	ft_lstdelone(null_node_content, set_int_zero);
	ft_lstdelone(NULL, NULL);
	printf(" NO\n");
	return (0);
}
