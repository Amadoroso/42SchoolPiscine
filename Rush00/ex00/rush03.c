/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:32:38 by addias            #+#    #+#             */
/*   Updated: 2025/08/02 19:32:42 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ln;
	int	col;

	ln = 1;
	while (ln <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((ln == 1 && col == 1) || (ln == y && col == 1))
				ft_putchar('A');
			else if ((ln == 1 && col == x) || (ln == y && col == x))
				ft_putchar('C');
			else if (ln == 1 || ln == y || col == 1 || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		ln++;
	}
}
