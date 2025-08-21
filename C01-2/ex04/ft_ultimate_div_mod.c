/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:08:51 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/07 14:18:41 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	holder;

	holder = *a;
	*a = *a / *b;
	*b = holder % *b;
}

/*int main()
{
	int *a;
	int *b;
	int c;
	int d;
	int div;
	int mod;
	char char_div;
	char char_mod;
	
	a = &c;
	b = &d;
	c = 14;
	d = 10;

	ft_ultimate_div_mod(a, b);

	div = c;
	mod = d;
	char_div = div + '0';
	char_mod = mod + '0';
	write(1, "div =", 5);
	write (1, &char_div, 1);
	write(1, " mod =", 6);
	write (1, &char_mod, 1);
	write (1, "\n", 1);
	return (0);
}*/