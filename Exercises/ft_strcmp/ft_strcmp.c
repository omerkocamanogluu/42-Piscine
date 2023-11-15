int	ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] && s2[index] && s1[index] == s2[index])
	{
		index++;
	}
	return (s1[index] - s2[index]);
}
#include <stdio.h>
int main(void)
{
	char omer[] = "omer1";
	char kocamanoglu[] = "omer";
	printf("%d", ft_strcmp(omer, kocamanoglu));
}