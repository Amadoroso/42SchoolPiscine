/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:14:53 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/03 16:14:56 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writting(int a, int b, int c)
{
	char	a_;
	char	b_;
	char	c_;

	a_ = a + '0';
	b_ = b + '0';
	c_ = c + '0';
	if (a == 7 && b == 8 && c == 9)
	{
		write(1, &a_, 1);
		write(1, &b_, 1);
		write(1, &c_, 1);
	}
	else if (a != b && b != c)
	{
		write(1, &a_, 1);
		write(1, &b_, 1);
		write(1, &c_, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_writting(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}