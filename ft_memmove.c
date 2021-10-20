#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t			i;
	unsigned char *d;
	unsigned char temp[size];

	d = (unsigned char *)destination;
	i = 0;
	if (!destination)
		return (NULL);
	ft_memcpy(temp, source, size);
	while (i < size)
	{
		d[i] = temp[i];
		i++;
	}
	return (destination);
}
