#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[size - 1] = '\0';
	return (ft_strlen(src));
}