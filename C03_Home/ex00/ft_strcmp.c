#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (unsigned char)(*s1) - (unsigned char)(*s2);
}

int	main(void)
{
	char s1[] = "abcde";
	char s2[] = "abcde";
	char s3[] = "ab";
	char s4[] = "abcdefghi";
	char s5[] = "125346";

	printf("Comparing '%s' and '%s': %d\n", s1, s2, ft_strcmp(s1, s2));
    	printf("Comparing '%s' and '%s': %d\n", s1, s3, ft_strcmp(s1, s3));
    	printf("Comparing '%s' and '%s': %d\n", s1, s4, ft_strcmp(s1, s4));
    	printf("Comparing '%s' and '%s': %d\n", s1, s5, ft_strcmp(s1, s5));
}
