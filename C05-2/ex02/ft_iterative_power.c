/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:08:19 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/17 14:34:20 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;

	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else
	{
		a = nb;
		while (power > 1)
		{
			nb = nb * a;
			power--;
		}
		return (nb);
	}
}

/* int	main(int argc, char **argv)
{
	char *error = "error";
	int i;
	int a;
	int nb;
	int pwr;
	
	if (argc != 3)
	{
		i = 0;
		while (error[i] != 0)
		{
			write(1, &error[i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while ((*(*(argv + 1) + i) != 0))
	{
		if (!((*(*(argv + 1) + i) >= 48 && *(*(argv + 1) + i) <= 57) 
		|| *(*(argv + 1) + i) == '-'))
		{
			a = 0;
			while (error[a] != 0)
			{
			write(1, &error[a], 1);
			a++;
			}
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	i = 0;
	while ((*(*(argv + 2) + i) != 0))
	{
		if (!(*(*(argv + 2) + i) >= 48 && *(*(argv + 2) + i) <= 57))
		{
			a = 0;
			while (error[a] != 0)
			{
			write(1, &error[a], 1);
			a++;
			}
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}	
	i = 0;
	nb = 0;
	while ((*(*(argv + 1) + i) != 0))
	{
		if ((*(*(argv + 1) + i) == '-'))
			i++;
		else
		{
		nb = nb * 10 + (*((*(argv + 1)) + i) - '0');
		i++;
		}
	}
	if ((*(*(argv + 1) + 0) == '-'))
		nb = nb * -1;
	i = 0;
	pwr = 0;
	while ((*(*(argv + 2) + i) != 0))
	{
		pwr = pwr * 10 + (*((*(argv + 2)) + i) - '0');
		i++;
	}
	nb = ft_iterative_power(nb, pwr);
	printf("%d", nb);
	printf("%s", "\n");
	return (0);
} */