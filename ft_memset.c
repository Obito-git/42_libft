#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		*(unsigned char *)(destination + i++) = c;
	return (destination);
}
