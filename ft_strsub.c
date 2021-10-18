#include "libft.h"

// Should I make safety checks in this function?
// I dont check if start is overflowing s.
// Also it allocates len memory bytes, even if it wont be
// necessary in some cases (len(s + start) < len).
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!s || !len)
		return (NULL);
	p = (char *) malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (i < len && *(s + start))
		p[i++] = *(s++ + start);
	p[i] = 0;
	return (p);
}
