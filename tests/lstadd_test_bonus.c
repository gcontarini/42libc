#include "../libft.h"
#include <stdio.h>

void	test(void)
{
	int	i = 5;
	int	j = 7;
	int	k = 9;
	int	z = 10;

	t_list	*start;
	t_list	*nnode;
	t_list	*curr;

	start = ft_lstnew(&i);
	start->next = ft_lstnew(&j);
	start->next->next = ft_lstnew(&k);
	curr = start;
	printf("CONTENT: ");
	while (curr)
	{
		printf("%i ", *(int *) curr->content);
		curr = curr->next;
	}
	printf("\n");
	nnode = ft_lstnew(&z);
	ft_lstadd_front(&start, nnode);
	curr = start;
	printf("NEW CONTENT: ");
	while (curr)
	{
		printf("%i ", *(int *) curr->content);
		curr = curr->next;
	}
	printf("\n#################\n");
	free(start->next->next->next);
	free(start->next->next);
	free(start->next);
	free(start);
}

void	test_no_segfault(void)
{
	int	i = 5;
	int	j = 7;
	int	k = 9;
	int	z = 10;

	t_list	*start;
	t_list	*nnode;
	t_list	*curr;

	start = ft_lstnew(&i);
	start->next = ft_lstnew(&j);
	start->next->next = ft_lstnew(&k);
	curr = start;
	printf("NO SEGFAULT CONTENT: ");
	while (curr)
	{
		printf("%i ", *(int *) curr->content);
		curr = curr->next;
	}
	printf("\n");
	nnode = ft_lstnew(&z);
	ft_lstadd_front(0, nnode);
	ft_lstadd_front(&start, 0);
	ft_lstadd_front(0, 0);
	curr = start;
	printf("EQUAL CONTENT: ");
	while (curr)
	{
		printf("%i ", *(int *) curr->content);
		curr = curr->next;
	}
	printf("\n#################\n");
	free(start->next->next);
	free(start->next);
	free(start);
	free(nnode);
}

int	main(void)
{
	test();
	test_no_segfault();
	return (0);
}
