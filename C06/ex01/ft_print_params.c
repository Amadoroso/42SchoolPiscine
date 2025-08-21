/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:48:56 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/17 10:57:07 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	a = 1;
	while (a < argc)
	{
		i = 0;
		while (*(*(argv + a) + i) != 0)
		{
			write (1, (*(argv + a) + i), 1);
			i++;
		}
		write (1, "\n", 1);
		a++;
	}
	return (0);
}
