/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okocaman <okocaman@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:30:39 by okocaman          #+#    #+#             */
/*   Updated: 2023/11/08 06:33:18 by okocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 1)
		write(1, "a\n", 2);
	while (av[1][i])
	{
		if (av[1][i] == 'a')
		{
			write(1, &av[1][i], 1);
			break ;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
