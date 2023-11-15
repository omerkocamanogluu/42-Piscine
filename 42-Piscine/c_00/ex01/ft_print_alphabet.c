/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okocaman <okocaman@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:34:50 by okocaman          #+#    #+#             */
/*   Updated: 2023/10/25 16:47:23 by okocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	first;

	first = 'a';
	while (first <= 122)
	{
		write(1, &first, 1);
		first++;
	}
}
