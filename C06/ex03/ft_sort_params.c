/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 11:41:51 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/17 18:12:40 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *string1, char *string2)
{
	int	i;

	i = 0;
	while (string1[i] != 0 && string1[i] == string2[i])
		i++;
	return (string1[i] - string2[i]);
}

void	ft_putstr(char *string)
{
	int	i;

	i = 0;
	while (*(string + i) != 0)
	{
		write(1, (string + i), 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		a;
	char	*temp;

	a = 1;
	while (a < argc - 1)
	{
		if (ft_strcmp(*(argv + a), *(argv + a + 1)) > 0)
		{
			temp = *(argv + a);
			*(argv + a) = *(argv + a + 1);
			*(argv + a + 1) = temp;
			if (a != 1)
				a--;
		}
		else
			a++;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(*(argv + a));
		a++;
	}
	return (0);
}
