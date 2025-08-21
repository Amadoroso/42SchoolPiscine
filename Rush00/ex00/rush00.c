/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:57:23 by addias            #+#    #+#             */
/*   Updated: 2025/08/07 12:47:56 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ln;
	int	col;

	if (x == 0 || y == 0)
	{
		ft_putchar(0);
	}
	else
	{

		ln = 1;
		while (ln <= y)
		{
			col = 1;
			while (col <= x)
			{
				if ((ln == 1 && col == 1) || (ln == y && col == x))
					ft_putchar('o');
				else if ((ln == 1 && col == x) || (ln == y && col == 1))
					ft_putchar('o');
				else if (ln < y && ln > 1 && (col == 1 || col == x))
					ft_putchar('|');
				else if (ln == 1 || ln == y || col == 1 || col == x)
					ft_putchar('-');
				else
					ft_putchar(' ');
				col++;
			}
			ft_putchar('\n');
			ln++;
		}
	}
}

