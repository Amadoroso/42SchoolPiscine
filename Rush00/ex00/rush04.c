/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:57:23 by addias            #+#    #+#             */
/*   Updated: 2025/08/02 19:11:35 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	counter(int col)
{
	col++;
}

void	caso1(int ln, int col, int x, int y)
{
	if (ln == 1 && col == 1)
		ft_putchar('A');
	else if ((ln == 1 && col == x) || (ln == y && col == 1))
		ft_putchar('C');
	else if (ln == y && col == x)
		ft_putchar('C');
}

void	casogeral(int ln, int col, int x, int y)
{
	if ((ln == 1 && col == 1) || (ln == y && col == x))
		ft_putchar('A');
	else if ((ln == 1 && col == x) || (ln == y && col == 1))
		ft_putchar('C');
	else if (ln == 1 || ln == y || col == 1 || col == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

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
			if ((x == 1 && ln == y) || (y == 1 && col == x))
				caso1(ln, col, x, y);
			else
			{
				casogeral(ln, col, x, y);
			}
			col++;
		}
		ft_putchar('\n');
		ln++;
	}
}
