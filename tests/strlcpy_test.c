#include "../libft.h"
#include <stdio.h>

void	test(const char *src, size_t dstsize)
{
	char	buff[200];
	size_t	len;

	printf("WORD: %s\n", src);
	len = ft_strlcpy(buff, src, dstsize);
	printf("RESULT: %s\n", buff);
	printf("RETURN: %ld\n", len);
	printf("###########\n");
}

int	main(void)
{
	test("AAAA", 5);
	test("BBBB", 4);
	test("CCCC", 0);
	test("CCCC", 1);
	test("", 0);
	test("", 1);
	test("", 5);
	//test(0, 0); Will segfault the program
	return (0);
}
