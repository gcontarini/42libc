#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	nbr;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	n = 1;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			n = -1;
	nbr = 0;
	while (*str >= '0' && *str <= '9')
		nbr = 10 * nbr + (n * (*str++ - '0'));
	return (nbr);
}
