#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while(*str)
	{
		write (1, str, 1);
		str++;
	}
}

int	main(void)
{
	char s[] = "123abc";
	ft_putstr(s);
	write (1, "\n", 1);
}
