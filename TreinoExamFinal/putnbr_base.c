/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:54:52 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/21 18:04:55 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
	int a;
	int b;
	int digits;
	int nbr_copy;
	char *array;

	base_length = ft_base_checker(base);
	if (base_length >=2)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		nbr_copy = nbr;
		digits = 0;
		while (nbr_copy != 0)
		{
			nbr_copy = nbr_copy / base_length;
			digits++;
		}
		array = malloc(digits * sizeof(int));
		b = digits;
		while (digits > 0)
		{
			*(array + digits) = *(base + (nbr % base_length));
			nbr = nbr / base_length;
			digits--;
		}
		a = 0;
		while (a < b)
		{
			write (1, (array + a), 1);
			a++;
		}
		
	}
}

int main()
{
	ft_putnbr_base(-456789, "01");
	write(1, "\n", 1);
	return (0);
}