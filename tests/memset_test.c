#include "../libft.h"
#include <stdio.h>

void	test(int c, size_t len)
{
	void	*b;

	b = malloc(len);
	ft_memset(b, c, len);
	printf("# CHAR: %c LEN: %ld #\n", c, len);
	printf("Memory: ");
	for (int i = 0; c == *(char *) (b + i); i++)
		printf("%c", *(char *) (b + i));
	printf("\n##################\n");
	free(b);
}

int	main(void)
{
	test('A', 6);
	test('B', 0);
	test('C', 1);
	test('0', 5);
	test(0, 1);
	test(0, 0);
	test('$', 3);
	test('@', 12);
	return (0);
}
