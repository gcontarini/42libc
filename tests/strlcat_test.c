#include "../libft.h"
#include <stdio.h>

void	test(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	printf("WORD: %s - %ld\n", src, dstsize);
	len = ft_strlcat(dst, src, dstsize);
	printf("RESULT: %s\n", dst);
	printf("RETURN: %ld\n", len);
	printf("###########\n");
}

int	main(void)
{
	char	bff[200];

	test(bff, "", 15);
	test(bff, "AAAA", 0);
	test(bff, "AAAA", 1);
	test(bff, "BBBB", 4);
	test(bff, "CCCC", 10);
	test(bff, "", 100);
	test(bff, "DDDDDDDDDD", 100);
	//test(bff, 0, 0); Will segfault
	test(0, "EEEE", 0);
	//test(0, "EEEE", 1); Will segfault
	test(bff, "AAAA", 0);
	test(bff, "BBBBB", 3);
	return (0);
}
