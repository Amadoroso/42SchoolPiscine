/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:47:46 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/16 19:53:51 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;

	if (nb <= 0)
		return (0);
	a = 0;
	while (a < nb)
	{
		a++;
		if ((a * a) == nb)
			return (a);
	}
	return (0);
}

/* int	main()
{
	printf("%d",ft_sqrt(1));
	printf("%s", "\n");
	return (0);
} */