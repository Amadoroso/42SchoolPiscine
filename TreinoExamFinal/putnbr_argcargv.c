/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_argcargv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 11:51:28 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/21 15:08:53 by apinho-a         ###   ########.fr       */
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
	int i;
	int nbr_copy;
	int size;
	int digits_index;
	int *array;
	int neg;
	char c;
	
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
		write(1, "\n", 1);
	}
	else
	{
		neg = 0;
		if (nbr < 0)
		{
			nbr = nbr * -1;
			neg = 1;
		}
		nbr_copy = nbr;
		size = 0;
		while (nbr_copy != 0)
		{
			nbr_copy = nbr_copy / 10;
			size++;
		}
		array = malloc((size) * sizeof(int));
		digits_index = size - 1;
		while (digits_index >= 0)
		{
			*(array + digits_index) = nbr % 10;
			nbr = nbr / 10;
			digits_index--;
		}
		i = 0;
		if (neg == 1)
			write(1, "-", 1);
		while (i < size)
		{
			c = *(array + i) + '0';
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
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