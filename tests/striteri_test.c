#include "../libft.h"
#include <stdio.h>

void	plus_one(unsigned int i, char *s)
{
	*s = *s + i;
}

void	test(char *s)
{
	printf("INPUT: %s\n", s);
	ft_striteri(s, plus_one);
	printf("RESULT: %s\n", s);
	printf("#######################\n");
}

void	test_nullf(char *s)
{
	printf("INPUT: %s\n", s);
	ft_striteri(s, 0);
	printf("RESULT: %s\n", s);
	printf("#######################\n");
}

int main(void)
{
	char	s1[] = "TEXTO";
	test(s1);
	char	s2[] = "TEXTO LONGO LONG MESMO COM #$@#%";
	test(s2);
	char	s3[] = " ";
	test(s3);
	char	s4[] = "";
	test(s4);
	char	*s5 = NULL;
	test(s5);
	test_nullf(s1);
	test_nullf(s2);
	test_nullf(s3);
	test_nullf(s4);
	test_nullf(s5);
	//test("OKOK"); Will cause a bus error
	return (0);
}
