#include "../libft.h"
#include <stdio.h>

int	g_malloc_active = 0;
int	g_malloc_counter = 0;

void	*malloc(size_t i)
{
	if (g_malloc_active && g_malloc_counter > 3)
		return (NULL);
	else
		g_malloc_counter++;
	return (calloc(1, i));
}

void	*cpy_int_plus_one(void *content)
{
	int	*p;

	p = malloc(sizeof(int));
	if (!p)
		return (NULL);
	*p = *(int *) content + 1; 
	return ((void *) p);
}

void	del_int(void *content)
{
	free(content);
}

void	ft_lstprintoneint(void *content)
{
	printf("-%d", *(int *) content);
}

void	ft_lstprintint(t_list *lst)
{
	printf("START LIST: ");
	ft_lstiter(lst, ft_lstprintoneint);
	printf("\nEND LIST\n");
}

int	main(void)
{
	int	i = 5;
	int	j = 7;
	int	k = 9;

	t_list	*lst1;
	t_list	*lst2;

	lst1 = ft_lstnew(cpy_int_plus_one(&i));
	lst1->next = ft_lstnew(cpy_int_plus_one(&j));
	lst1->next->next = ft_lstnew(cpy_int_plus_one(&k));
	ft_lstprintint(lst1);
	printf("---> Apply map to create new lst <---\n");
	lst2 = ft_lstmap(lst1, cpy_int_plus_one, del_int);
	ft_lstprintint(lst2);
	printf("---> Original unchaged lst <---\n");
	ft_lstprintint(lst1);
	printf("---> NULL del pointer lst <---\n");
	ft_lstmap(lst1, NULL, del_int);
	ft_lstclear(&lst2, del_int);
	lst2 = ft_lstmap(lst1, cpy_int_plus_one, NULL);
	ft_lstprintint(lst2);
	ft_lstclear(&lst2, del_int);
	printf("---> Allocation error during execution\n");
	g_malloc_active = 1;
	lst2 = ft_lstmap(lst1, cpy_int_plus_one, del_int);
	if (!lst2)
		printf("CORRECT CLEARED\n");
	g_malloc_counter = 0;
	lst2 = ft_lstmap(lst1, cpy_int_plus_one, NULL);
	if (!lst2)
		printf("Will leak memory in this case.\n");
	ft_lstclear(&lst1, del_int);
	printf("---> NULL lst <---\n");
	ft_lstmap(NULL, cpy_int_plus_one, del_int);
	ft_lstmap(NULL, NULL, del_int);
	ft_lstmap(NULL, NULL, NULL);
	return (0);
}
