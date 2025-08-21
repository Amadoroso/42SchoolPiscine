/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:16:29 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/03 19:16:32 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_nbr(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = a / 10 + '0';
	a2 = a % 10 + '0';
	b1 = b / 10 + '0';
	b2 = b % 10 + '0';
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
			{
				ft_write_nbr(a, b);
			}
			else
			{
				ft_write_nbr(a, b);
				write(1, ",", 1);
				write(1, " ", 1);
			}
			b++;
		}
		a++;
	}
}
