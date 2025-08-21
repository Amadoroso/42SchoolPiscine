/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:33:07 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/17 18:14:35 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (*(*(argv + 0) + i) != 0)
	{
		write (1, (*(argv + 0) + i), 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
