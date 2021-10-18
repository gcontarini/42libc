#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n--)
	{
		if (*p == c)
			return ((void *) p);
		p++;
	}
	return (NULL);
}
