#include "../libft.h"
#include <stdio.h>

void	test_char(const char *src, size_t n)
{
	char	*p;

	p = malloc(n);
	ft_memcpy(p, src, n);
	printf("### INPUT: %s ###\n", src);
	for (int i = 0; i < (int) n; i++)
		printf("%c", *(p + i));
	printf("\n#################\n");
	free(p);
}

void	test_int(const int *src, size_t n)
{
	int	*p;

	p = malloc(n);
	ft_memcpy(p, src, n);
	printf("### INPUT:");
	for (int i = 0; i < (int) (n / sizeof(int)); i++)
		printf(" %i", *(src + i));
	printf(" ###\n RESULT:");
	for (int i = 0; i < (int) (n / sizeof(int)); i++)
		printf(" %i", *(p + i));
	printf("\n#################\n");
	free(p);
}

int	main(void)
{
	test_char("AAAAA", 5);
	test_char("B", 1);
	test_char("CCCCC", 2);
	test_char("DDDDDD", 0);
	test_char("", 5);
	test_char("", 1);
	test_char("", 0);
	test_char(0, 5);
	test_char(0, 1);
	test_char(0, 0);
	int	p[] = {1, 2, 3, 4, 5};
	test_int(p, 5 * sizeof(int));
	test_int(p, 1 * sizeof(int));
	test_int(p, 2 * sizeof(int));
	test_int(p, 0 * sizeof(int));
	int	empt[]={};
	test_int(empt, 5 * sizeof(int));
	test_int(empt, 1 * sizeof(int));
	test_int(empt, 0 * sizeof(int));
	return (0);
}
