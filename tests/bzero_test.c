#include "../libft.h"
#include <stdio.h>

void	test(size_t n)
{
	unsigned char	*p;

	p = malloc(n);
	ft_memset(p, 'A', n);
	printf("### N: %ld ###\nMEM PREV: ", n);
	for (int i = 0; i < (int) n; i++)
		printf("%c", *(p + i));
	ft_bzero(p, n);
	printf("\nMEM NOW: ");
	for (int i = 0; i < (int) n; i++)
		printf("%c", *(p + i));
	printf("\n############\n");
	free(p);
}

int	main(void)
{
	test(1);
	test(2);
	test(0);
	test(10);
	return (0);
}

