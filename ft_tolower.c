#include "libft.h"

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
    //linux fix
    //	else if (c < -1)
    //		return (c + 256);
	return (c);
}

