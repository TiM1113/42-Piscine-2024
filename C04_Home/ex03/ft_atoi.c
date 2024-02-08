#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str)
{
	int sinal;
	int num;


	sinal = 1;
	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
	|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;

	// 处理正负号
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sinal *= -1;
		str++;
	}
	// 转换数字字符到整数
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sinal);
}

int	main(void)
{
	char s1[] = " ---+--+1234ab567";
	char s2[] = "-456";
	printf("转换后的数字为:%d\n", ft_atoi(s1));
	write (1,"\n", 1);
	printf("转换后的数字为:%d\n", ft_atoi(s2));
}
