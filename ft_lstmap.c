#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*start;
	t_list	*curr;

	if (!lst)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	curr = start;
	while (lst->next)
	{
		lst = lst->next;
		curr->next = ft_lstnew((f)(lst->content));
		if (!curr->next)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		curr = curr->next;
	}
	return (start);
}
