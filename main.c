#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


int main(void)
{
	int len;
	char *str = "hello world\n";

	len = ft_strlen(str);
	printf("%d\n", len);
	return (0);
}
