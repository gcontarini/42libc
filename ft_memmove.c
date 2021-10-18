#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst + len - 1;
	s = (unsigned char *) src + len - 1;
	if ((uintptr_t) src + len - 1 >= (uintptr_t) dst)
	{
		while (len--)
			*d-- = *s--;
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
