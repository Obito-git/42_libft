/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:41:31 by amyroshn          #+#    #+#             */
/*   Updated: 2021/08/10 14:01:13 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strstr(const char	*str, const char	*to_find)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	if (to_find[z] == '\0')
		return ((char *)&str[z]);
	while (str[i])
	{
		while (to_find[z] == str[i + z])
		{
			if (to_find[z + 1] == '\0')
				return ((char *)&str[i]);
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
