#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	res = (char *) malloc(len + 1);
	if (!res)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		res[0] = 0;
		return (res);
	}
	ft_strlcpy(res, &s[start], len + 1);
	return (res);
}

