#include "libft.h"


/*
char *ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *) &str[i]);
		i++;
	}
	return (NULL);
}*/

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*pos;

	pos = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			pos = (char *)&s[i];
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (pos);
}
