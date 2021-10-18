#include "../libft.h"
#include <stdio.h>

void	plus_one(void *content)
{
	*(int *) content += 1;
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
	printf("third: %d\n", *(int *)  start->next->next->content);
	printf("second: %d\n", *(int *)  start->next->content);
	printf("first: %d\n", *(int *)  start->content);
	printf("---> Apply plus_one function <---\n");
	ft_lstiter(start, plus_one);
	printf("third: %d\n", *(int *)  start->next->next->content);
	printf("second: %d\n", *(int *)  start->next->content);
	printf("first: %d\n", *(int *)  start->content);
	ft_lstiter(NULL, plus_one);
	ft_lstiter(start, NULL);
	ft_lstiter(NULL, NULL);
	ft_lstclear(&start, plus_one);
	return (0);
}
