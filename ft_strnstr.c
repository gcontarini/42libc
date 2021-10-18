#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	if (*needle == 0)
		return ((char *) haystack);
	while (len && *haystack)
	{
		i = 0;
		while (needle[i] && haystack[i] 
			&& haystack[i] == needle[i] && i < len)
			i++;
		if (needle[i] == 0)
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
