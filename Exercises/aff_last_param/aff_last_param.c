/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okocaman <okocaman@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:03:44 by okocaman          #+#    #+#             */
/*   Updated: 2023/11/08 04:10:50 by okocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (argv[argc -1][i])
		{
			write(1, &argv[argc -1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
