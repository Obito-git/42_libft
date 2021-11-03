#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	i;
	t_list *act;

	if (!lst)
		return (0);
	i = 1;
	act = lst->next;
	while (act != NULL)
	{
		act = act->next;
		i++;
	}
	return (i);
}
