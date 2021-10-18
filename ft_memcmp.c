#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (n == 0)
		return (0);
	p1 = (const unsigned char *) s1;
	p2 = (const unsigned char *) s2;
	while (--n)
	{
		if (*p1 != *p2)
			break;
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
