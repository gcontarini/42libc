#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *) b;
	while (len--)
		*p++ = c;
	return (b);
}
