#include <unistd.h>

void	error_message(void)
{
	write(1, "Lutfen sıfırdan buyuk bir sayi giriniz", 42);
}

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	satir;
	int	sutun;

	satir = 1;
	while (satir <= y)
	{
		if (x <= 0 || y <= 0)
			error_message();
		sutun = 1;
		while (sutun <= x)
		{
			if ((satir == 1 && sutun == 1) || (satir == y && sutun == 1))
				ft_putchar('A');
			else if ((satir == 1 && sutun == x) || (satir == y && sutun == x))
				ft_putchar('C');
			else if ((satir == 1 || satir == y) || (sutun == 1 || sutun == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			sutun++;
		}
		ft_putchar('\n');
		satir++;
	}
}
