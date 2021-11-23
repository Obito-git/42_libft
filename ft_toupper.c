#include "libft.h"
#include <ctype.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
//  linux fix
//	else if (c < -1)
//		return (c + 256);
	return (c);
}
