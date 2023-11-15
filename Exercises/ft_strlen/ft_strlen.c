int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>
int	main(void)
{
	char omer[] = "omerkocamanoglu";
	printf("%d", ft_strlen(omer));
}