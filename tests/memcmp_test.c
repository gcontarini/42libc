#include "../libft.h"
#include <stdio.h>

void	test(const void *s1, const void *s2, size_t n)
{
	printf("COMP %ld: %s - %s\n", n, s1, s2);
	printf("RETURN: %i\n", ft_memcmp(s1, s2, n));
	printf("###########################\n");
}

int	main(void)
{
	test("TEXTO", "TEXTO", 6);
	test("TEXTo", "TEXTO", 5);
	test("TEXTo", "TEXTO", 4);
	test("TAAAAA", "TBBBBB", 1);
	test("TAAAAA", "TBBBBB", 2);
	test("TEXTo", "TEXTO", 0);
	test("TEXTO", "TEXTO", 0);
	test("AAAAA", "BBBBB", 0);
	test("", "TEXTO", 1);
	test("", "TEXTO", 0);
	test("", "", 0);
	test("", "", 1);
	test("", "", 2);
	test(0, "AAAA", 0);
	//test(0, "AAAA", 1); Will segfault
	test(0, 0, 0);
	//test(0, 0, 1); Will segfault
	int	arr1[] = {1, 2, 3, 4, 5};
	int	arr2[] = {1, 2, 2, 4, 5};
	int	arr3[] = {1, 2, 3, 4, 5};
	test(arr1, arr2, 5 * sizeof(int));
	test(arr1, arr2, 2 * sizeof(int));
	test(arr1, arr3, 5 * sizeof(int));
	return (0);
}
