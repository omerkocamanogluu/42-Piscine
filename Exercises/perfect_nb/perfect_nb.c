#include <stdio.h>

int	main(void)
{
	int nb, i, total = 0;
	printf("Please enter the number you want to query\n");
	scanf("%d", &nb);
	for (i = 1; i < nb; i++)
	{
		if (nb % i == 0)
			total += i;
	}
	if (total == nb)
		printf("Perfect Number");
	else
		printf("Not Perfect Number");
	return (0);
}
