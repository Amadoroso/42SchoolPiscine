/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:24:24 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/20 14:19:14 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			ft_base_from_check(char *base_from);
int			ft_base_to_check(char *base_to);
int			ft_neg_count(char *nbr, int neg_count);
int			ft_spaces_signs(char *nbr);
long int	ft_atoi_base_result(int i, int h, int found, long int nbr_b10);

long int	ft_atoi_base(char *nbr, char *base_from, int bf)
{
	long int	nbr_b10;
	int			i;
	int			j;
	int			h;
	int			found;

	found = 0;
	nbr_b10 = 0;
	i = ft_spaces_signs(nbr);
	h = i;
	while (*(nbr + i) != 0)
	{
		j = 0;
		while (*(base_from + j) != 0)
		{
			if (*(nbr + i) == *(base_from + j))
			{
				nbr_b10 = nbr_b10 * bf + j;
				found++;
			}
			j++;
		}
		i++;
	}
	return (ft_atoi_base_result(i, h, found, nbr_b10));
}

int	ft_pop_array(int *array, long int nbr_b10, int bt)
{
	int			i;
	long int	nbr_new;

	i = 31;
	while (nbr_b10 > 0)
	{
		nbr_new = nbr_b10 % bt;
		*(array + i) = nbr_new;
		nbr_b10 = nbr_b10 / bt;
		i--;
	}
	i++;
	return (i);
}

char	*ft_write_string(int i, int *array, int neg_count, char *base_to)
{
	int		j;
	char	*nbr_new_s;

	nbr_new_s = malloc(33 - i);
	j = 0;
	if (neg_count % 2 != 0 && 33 - i >= 2)
		*(nbr_new_s + j++) = '-';
	while (i < 32)
		*(nbr_new_s + j++) = *(base_to + (*(array + i++)));
	*(nbr_new_s + j) = 0;
	return (nbr_new_s);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			bf;
	int			bt;
	int			i;
	int			neg_count;
	int			array[32];

	bf = ft_base_from_check(base_from);
	if (bf < 2)
		return (0);
	bt = ft_base_to_check(base_to);
	if (bt < 2)
		return (0);
	neg_count = 0;
	neg_count = ft_neg_count(nbr, neg_count);
	i = ft_pop_array(array, ft_atoi_base(nbr, base_from, bf), bt);
	return (ft_write_string(i, array, neg_count, base_to));
}

/* int main()
{
	char *nbr = "-2147483648";
	char *base_from = "0123456789";
	char *base_to = "01 ";
	char *nbr_new_s;
	nbr_new_s = ft_convert_base(nbr, base_from, base_to);
	printf("%s", nbr_new_s);
	return (0);
} */