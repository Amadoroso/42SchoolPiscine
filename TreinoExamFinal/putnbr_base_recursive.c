/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_base_recursive.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:54:52 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/21 17:42:05 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_checker(char *base)
{
	int base_length;
	int j;
	
	base_length = 0;
	while (*(base + base_length) != 0)
	{	
		if (*(base + base_length) == '+' || *(base + base_length) == '-')
			return (0);
		j = base_length + 1;
		while (*(base + j) != '\0')
		{
			if (*(base + base_length) == *(base + j))
				return (0);
			j++;
		}
		base_length++;
	}
	return (base_length);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_length;
	int j;
	char c;

	base_length = ft_base_checker(base);
	if (base_length < 2)
	{
	}
	if (base_length >= 2)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			write(1, "-", 1);
		}
		if (nbr < base_length)
		{	
			j = 0;
			while(*(base + j) != 0)
			{
				c = nbr + '0';
				if (*(base + j) == c)
					write(1, (base + j), 1);
				j++;
			}
		}
		if (nbr >= base_length)
		{
			ft_putnbr_base(nbr / base_length, base);
			ft_putnbr_base(nbr % base_length, base);
		}

	}
}

int main()
{
	ft_putnbr_base(-456789, "01");
	write(1, "\n", 1);
	return (0);
}