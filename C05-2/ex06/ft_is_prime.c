/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:30:50 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/16 19:54:21 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	i = 1;
	while (i < nb)
	{
		if (nb % i == 0 && i != 1)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	main()
{
	char n;

	n = ft_is_prime(-3) + '0';
	write(1, &n, 1);
	write(1, "\n", 1);
	return (0);
} */