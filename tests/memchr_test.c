#include "../libft.h"
#include <stdio.h>

void	test(const void *s, int c, size_t n)
{
	void	*p;

	printf("INPUT %ld %c: ", n, (char) c);
	for (int i = 0; i < (int) n; i++)
		printf("%c", *(unsigned char *) s);
	printf("\n");
	p = ft_memchr(s, c, n);
	if (p) printf("RESULT: %c\n", *(unsigned char *) p);
	else printf("RESULT: NULL\n");
	printf("####################\n");
}

int	main(void)
{
	test("ABCDE", 'C', 5);
	test("ABCDE", 0, 5);
	test("ABCDE", 0, 1);
	test("ABCDE", 'A', 0);
	test(0, 'A', 0);
	//test(0, 'A', 0);
	int arr[] = {1, 2, 3, 4, 5};
	test(arr, 4, 5);
	test("", 0, 5);
	test("AA", 0, 5);
	test("AA", 'b', 1);
	return (0);
}
