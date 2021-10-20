/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:52:05 by amyroshn          #+#    #+#             */
/*   Updated: 2021/08/17 15:08:51 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strncpy(char	*dest,	char	*src,	unsigned int	n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (!src[i])
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
			break ;
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
