/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:26:02 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/06 20:09:08 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int a;
	int b;
	int dv;
	int md;
	int *div;
	int *mod;
	char char_dv;
	char char_md;

	a = 14;
	b = 10;
	div = &dv;
	mod = &md;

	ft_div_mod(a, b, div, mod);
	char_dv = dv + '0';
	char_md = md + '0';

	write(1, "div =", 5);
	write (1, &char_dv, 1);
	write(1, " mod =", 6);
	write (1, &char_md, 1);
	write (1, "\n", 1);
	return (0);
}*/