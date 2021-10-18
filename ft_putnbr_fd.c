#include "libft.h"

static size_t	ft_fillitoa(int	n, char *bff, size_t len);

void	ft_putnbr_fd(int n, int fd)
{
	size_t	len;
	char	buff[MAX_INT_LENGTH];

	len = ft_fillitoa(n, buff, 0);
	write(fd, buff, len);
}

static size_t	ft_fillitoa(int	n, char *bff, size_t len)
{
	unsigned int	i;

	i = n;
	if (n < 0)
	{
		i = -n;
		bff[len++] = '-';
	}
	if (i < 10)
		bff[len++] = i + 48;
	else
	{
		len = ft_fillitoa(i / 10, bff, len);
		bff[len++] = i % 10 + 48;
	}
	return (len);
}
