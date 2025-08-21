/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:52:41 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/06 20:09:09 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}

/*int	main()
{
	int a;
	int b;
	char a_char;
	char b_char;

	a = 3;
	b = 7;

	ft_swap(&a, &b);

	a_char = a + '0';
	b_char = b + '0';
	write(1, &a_char, 1);
	write(1, " ", 1);
	write(1, &b_char, 1);

	return (0);
}*/
