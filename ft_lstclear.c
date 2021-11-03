#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*previos;

	while (*lst)
	{
		previos = *lst;
		*lst = previos->next;
		(del)(previos->content);
		free(previos);
	}
	*lst = NULL;
}
