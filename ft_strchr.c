#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *) s;
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (c == 0 && *p == 0)
		return (p);
	return (NULL);
}
