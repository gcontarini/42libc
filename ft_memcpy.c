#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = (const char *) src;
	d = (char *) dst;
	while (n--)
		*d++ = *s++;
	return (dst);
}
