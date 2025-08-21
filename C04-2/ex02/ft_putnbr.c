/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:38:15 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/15 13:14:40 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_negative_and_zero(int *ptr_nb)
{
	if (*ptr_nb == 0)
	{
		write(1, "0", 1);
	}
	else if (*ptr_nb < 0 && *ptr_nb > -2147483648)
	{
		write(1, "-", 1);
		*ptr_nb = *ptr_nb * (-1);
	}
}

void	ft_determine_size(int a, int *ptr_size)
{
	*ptr_size = 0;
	while (a != 0)
	{
		a = a / 10;
		*ptr_size = *ptr_size + 1;
	}
}

void	ft_array_and_write(int nb, int size)
{
	int		array[12];
	int		index;
	char	nb_char;

	index = size - 1;
	while (index >= 0)
	{
		array[index] = nb % 10;
		nb = nb / 10;
		index--;
	}
	index = 0;
	while (index < size)
	{
		nb_char = array[index] + '0';
		write(1, &nb_char, 1);
		index++;
	}
}

void	ft_putnbr(int nb)
{
	int		size;

	ft_negative_and_zero(&nb);
	ft_determine_size(nb, &size);
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
	}
	else
	{
		ft_array_and_write(nb, size);
	}
}

/*int main()
{
	int nb;

	nb = -300;
	ft_putnbr(nb);
	return (0);
}*/