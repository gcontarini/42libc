#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*s;

	s = src;
	while (*s && dstsize > 1)
	{
		*dst++ = *s++;
		dstsize--;
	}
	if (dstsize)
		*dst = 0;
	while (*s)
		s++;
	return (s - src);
}
