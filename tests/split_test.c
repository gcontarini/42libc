#include "../libft.h"
#include <stdio.h>

// Use this variable to make malloc fail
int		g_malloc_calls = 0;
int		g_malloc_hook_active = 0;

void	*malloc(size_t size)
{
  if (g_malloc_hook_active && g_malloc_calls > 3)
    return (NULL);
  if (g_malloc_hook_active)
	  g_malloc_calls++;
  return (calloc(1, size));
}

void	test(char const *str, char c)
{
	char	**dp;

	printf("INPUT: %s - separated by %c\n", str, c);
	dp = ft_split(str, c);
	if (!dp)
		printf("NULL pointer\n");
	else
		for (int i = 0; dp[i] != NULL; i++)
		{
			printf("%i -\t%s\n", i + 1, dp[i]);
			free(dp[i]);
		}
	if (dp)
		free(dp);
	printf("#############################\n");
}


int	main(void)
{
	test("TEXTO DIVIDO POR ESPAÇO", ' ');
	test("TEXTO DIVIDO POR ESPAÇO", '.');
	test("TEXTO.DIVIDO.POR.PONTO", '.');
	test("TEXTO.DIVIDO.POR.PONTO..", '.');
	test(".TEXTO.DIVIDO.POR.PONTO", '.');
	test("...TEXTO.DIVIDO.POR.PONTO", '.');
	test("TEXTO.DIVIDO.POR.PONTO...", '.');
	test("..TEXTO.DIVIDO...POR.PONTO..", '.');
	test("..TEXTO.DIVIDO. ..POR.PONTO..", '.');
	test("", ' ');
	test("", '\x0');
	test(0, ' ');
	g_malloc_hook_active = 1;
	test("TEXTO DIVIDO POR ESPAÇO", ' ');
	return (0);
}
