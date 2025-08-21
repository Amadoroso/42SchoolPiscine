/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:35:37 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/13 19:20:51 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	a = 1;
	while (nb > 0)
	{
		a = a * nb;
		nb = nb - 1;
	}
	return (a);
}

/*int main()
{
	int nb;
	int a;

	nb = 0;
	a = ft_iterative_factorial(nb);
	printf("%d", a);
	return (0);
}*/