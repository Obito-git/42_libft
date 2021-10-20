#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	pos;

	i = 0;
	pos = -1ul;
	while (str[i])
	{
		if (str[i] == c)
			pos = i;
		i++;
	}
	if (pos != -1ul)
		return ((char *) &str[pos]);
	return (NULL);
}

