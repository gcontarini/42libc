#include "libft.h"

static size_t	ft_strlen2(char const *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str = (char *) malloc((ft_strlen2(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (*s)
		*str++ = f(i++, *s++);
	*str = 0;
	return (str - i);
}

static size_t	ft_strlen2(char const *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}
