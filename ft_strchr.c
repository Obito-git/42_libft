#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] && (unsigned char) str[i] != (unsigned char) c)
		i++;
	if ((unsigned char) str[i] == (unsigned char) c)
		return ((char *) &str[i]);
	return (NULL);
}
