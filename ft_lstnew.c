#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*res;

	res = (t_list *) malloc(sizeof(t_list));
	if (!res)
		return (NULL);
	res->next = NULL;
	res->content = content;
	return (res);
}
