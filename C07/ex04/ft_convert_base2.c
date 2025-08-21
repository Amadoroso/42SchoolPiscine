/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:24:24 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/20 14:19:02 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_from_check(char *base_from)
{
	int	bf;
	int	bf1;

	if (*(base_from) == 0)
		return (0);
	bf = 0;
	while (*(base_from + bf) != 0)
	{
		if (*(base_from + bf) == '-' || *(base_from + bf) == '+'
			|| *(base_from + bf) == ' ')
			return (0);
		bf1 = bf + 1;
		while (*(base_from + bf1) != 0)
		{
			if (*(base_from + bf) == *(base_from + bf1))
				return (0);
			bf1++;
		}
		bf++;
	}
	return (bf);
}

int	ft_base_to_check(char *base_to)
{
	int	bt;
	int	bt1;

	if (*(base_to) == 0)
		return (0);
	bt = 0;
	while (*(base_to + bt) != 0)
	{
		if (*(base_to + bt) == '-' || *(base_to + bt) == '+'
			|| *(base_to + bt) == ' ')
			return (0);
		bt1 = bt + 1;
		while (*(base_to + bt1) != 0)
		{
			if (*(base_to + bt) == *(base_to + bt1))
				return (0);
			bt1++;
		}
		bt++;
	}
	return (bt);
}

int	ft_neg_count(char *nbr, int neg_count)
{
	int	i;

	i = 0;
	while (*(nbr + i) == ' ')
		i++;
	while (*(nbr + i) == '-' || *(nbr + i) == '+')
	{
		if (*(nbr + i) == '-')
			neg_count++;
		i++;
	}
	return (neg_count);
}

int	ft_spaces_signs(char *nbr)
{
	int	i;

	i = 0;
	while (*(nbr + i) == ' ')
		i++;
	while (*(nbr + i) == '-' || *(nbr + i) == '+')
		i++;
	return (i);
}

long int	ft_atoi_base_result(int i, int h, int found, long int nbr_b10)
{
	if (found != i - h)
		return (0);
	else
		return (nbr_b10);
}
