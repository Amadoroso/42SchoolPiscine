/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_argcargv_recursive.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 11:51:28 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/21 15:09:00 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char **argv)
{
	int i;
	int neg_count;
	int nbr;
	
	i = 0;
	while (*(*(argv + 1) + i) <= ' ')
		i++;
	neg_count  = 0;
	while (*(*(argv + 1) + i) == '+' || *(*(argv + 1) + i) == '-')
	{
		if (*(*(argv + 1) + i) == '-')
			neg_count++;
		i++;
	}
	nbr = 0;
	while (*(*(argv + 1) + i) >= 48 && *(*(argv + 1) + i) <= 57)
	{
		nbr = nbr * 10 + (*(*(argv + 1) + i) - '0');
		i++;
	}
	if (neg_count % 2 != 0)
		nbr = nbr * -1;
	return (nbr);
}

void	ft_putnbr(int nbr)
{
	char c;
	
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
		write(1, "\n", 1);
	}
	else
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = nbr * -1;
		}
		if (nbr < 10)
		{
			c = nbr + '0';
			write(1, &c, 1);
		}
		if (nbr >= 10)
		{
			ft_putnbr(nbr / 10);			
			ft_putnbr(nbr % 10);
		}
	}
}

int	main(int argc, char **argv)
{
	char *error = "retard lmao";
	int i;
	int nbr;
	
	if (argc != 2)
	{
		i = 0;
		while (*(error + i) != 0)
		{
			write(1, (error + i), 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
	{
		nbr = ft_atoi(argv);
		ft_putnbr(nbr);		
	}

	return (0);
}