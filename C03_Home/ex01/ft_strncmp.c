#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
		return (unsigned char)(*s1) - (unsigned char)(*s2);
}

int	main(void)
{
	char s1[] = "abcde";
	char s2[] = "abcde";
	char s3[] = "ab";
	char s4[] = "abcdefghi";
	char s5[] = "125346";

	printf("Comparing '%s' and '%s' : %d\n", s1, s2, ft_strncmp(s1, s2, 4));
	printf("Comparing '%s' and '%s' : %d\n", s1, s3, ft_strncmp(s1, s3, 5));
	printf("Comparing '%s' and '%s' : %d\n", s1, s4, ft_strncmp(s1, s4, 8));
	printf("Comparing '%s' and '%s' : %d\n", s1, s5, ft_strncmp(s1, s5, 5));
}
