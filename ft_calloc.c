#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*wp;
	void		*p;
	size_t		bytes;

	bytes = count * size;
	p = malloc(bytes);
	if (!p)
		return (NULL);
	wp = (unsigned char *) p;
	while (bytes--)
		*wp++ = 0;
	return (p);
}
