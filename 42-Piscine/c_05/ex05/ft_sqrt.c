/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okocaman <okocaman@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:45:57 by okocaman          #+#    #+#             */
/*   Updated: 2023/11/06 15:17:16 by okocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb <= 0)
		return (0);
	while (num <= nb / num)
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (0);
}
