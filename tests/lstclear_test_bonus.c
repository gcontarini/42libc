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

	start = ft_lstnew(&i);
	start->next = ft_lstnew(&j);
	start->next->next = ft_lstnew(&k);
	printf("Third: %d\n", *(int *)  start->next->next->content);
	printf("Second: %d\n", *(int *)  start->next->content);
	printf("First: %d\n", *(int *)  start->content);
	printf("---> Start release <---\n");
	ft_lstclear(&start, set_int_zero);
	printf("Values: %d %d %d\n", i, j, k);
	if (!start)
		printf("Start was relased\n");
	printf("%p\n", start);
	printf("NO SEGFAULT?");
	ft_lstclear(&start, set_int_zero);
	ft_lstclear(NULL, set_int_zero);
	ft_lstclear(NULL, NULL);
	printf(" NO\n");
	return (0);
}
