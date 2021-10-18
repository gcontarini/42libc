#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*curr;

	if (!lst || !f)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	if (!start)
		return (NULL);
	curr = start;
	lst = lst->next;
	while (lst && curr)
	{
		curr->next = ft_lstnew(f(lst->content));
		if (!curr->next)
			ft_lstclear(&start, del);
		lst = lst->next;
		curr = curr->next;
	}
	return (start);
}
