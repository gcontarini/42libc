#include "../libft.h"
#include <stdio.h>

void	test(size_t count, size_t size)
{
	void	*p;

	printf("INPUT: %ld of size %ld\n", count, size);
	printf("RESULT: ");
	p = calloc(count, size);
	for (size_t i = 0; i < count * size; i++)
		printf("%c ", *(char *) (p + i) + '0');
	printf("\n########################\n");
	free(p);
}

int	main(void)
{
	test(5, sizeof(char));
	test(5, sizeof(int));
	test(5, sizeof(int *));
	test(0, sizeof(char));
	test(0, sizeof(int));
	test(1, sizeof(char));
	test(1, sizeof(int));
	test(0, 0);
	test(1, 0);
	test(5, 0);
	return (0);
}
