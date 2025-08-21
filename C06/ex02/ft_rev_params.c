/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:57:09 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/17 11:40:37 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	a = argc - 1;
	while (a > 0)
	{
		i = 0;
		while (*(*(argv + a) + i) != 0)
		{
			write(1, (*(argv + a) + i), 1);
			i++;
		}
		write(1, "\n", 1);
		a--;
	}
	return (0);
}
