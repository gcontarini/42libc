#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int	i = 5;
	int	j = 7;
	int	k = 9;

	t_list	*start;
	t_list	*curr;
	t_list	*null_node;

	start = ft_lstnew(&i);
	start->next = ft_lstnew(&j);
	start->next->next = ft_lstnew(&k);
	curr = start;
	printf("CONTENT BEFORE: ");
	while (curr)
	{
		printf("%i ", *(int *)  curr->content);
		curr = curr->next;
	}
	ft_lstadd_back(&start, ft_lstnew(&i));
	curr = start;
	printf("\nCONTENT AFTER: ");
	while (curr)
	{
		printf("%i ", *(int *)  curr->content);
		curr = curr->next;
	}
	printf("\nSEGFAULT ERRORS ?");
	ft_lstadd_back(0, start->next);
	ft_lstadd_back(&start, 0);
	null_node = NULL;
	ft_lstadd_back(&null_node, start->next);
	ft_lstadd_back(0, 0);
	printf(" NO\n");
	free(start->next->next->next);
	free(start->next->next);
	free(start->next);
	free(start);
	return (0);
}
