#include "../libft.h"
#include <stdio.h>

void	test(const char *src, size_t n)
{
	char	*dst;

	dst = malloc(n);
	ft_memmove(dst, src, n);
	printf("#### %s ####\n", src);
	printf("RESULT: %s\n", dst);
	printf("############\n");
	free(dst);}

void	test_overlap_char(void)
{
	char	src[7];
	char	*d;

	d = src + 3;
	src[0] = 'a';
	src[1] = 'b';
	src[2] = 'c';
	src[3] = 'd';
	ft_memmove(d, src, 4);
	printf("#### Overlap test ####\n");
	printf("RESULT: ");
	for (int i = 0; i < 4; i++) printf("%c", d[i]);
	printf("\nORIGINAL: ");
	for (int i = 0; i < 7; i++) printf("%c", src[i]);
	printf("\n############\n");
}

void	test_overlap_int(void)
{
	int	src[7];
	int	*d;

	d = src + 3;
	src[0] = 0;
	src[1] = 1;
	src[2] = 2;
	src[3] = 3;
	ft_memmove(d, src, 4 * sizeof(int));
	printf("#### Overlap test ####\n");
	printf("RESULT: ");
	for (int i = 0; i < 4; i++) printf("%i ", d[i]);
	printf("\nORIGINAL: ");
	for (int i = 0; i < 7; i++) printf("%i ", src[i]);
	printf("\n############\n");
}

void	test_overlap_heap(void)
{
	int	*src = malloc(1);
	int	*d = malloc(5);

	src[0] = 0;
	src[1] = 1;
	src[2] = 2;
	src[3] = 3;
	src[4] = 4;
	printf("#### Overlap heap test ####\n");
	ft_memmove(d, src, 5 * sizeof(int));
	printf("RESULT: ");
	for (int i = 0; i < 5; i++) printf("%i ", d[i]);
	printf("\nORIGINAL: ");
	for (int i = 0; i < 10; i++) printf("%i ", src[i]);
	printf("\n############\n");
	free(src);
	free(d);
}

int	main(void)
{
	test("TEXTO", 6); 
	test("AA", 3); 
	test("", 5); 
	test("", 0); 
	test("", 1); 
	test(0, 0); 
	test_overlap_char();
	test_overlap_int();
	test_overlap_heap();
	return (0);
}
