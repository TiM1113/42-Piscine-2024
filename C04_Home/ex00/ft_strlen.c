#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	main(void)
{
	char s1[] = "abcde12345ABCDE";

	printf("String length: %d\n", ft_strlen(s1));
}
