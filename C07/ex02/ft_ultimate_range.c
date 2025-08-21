/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:29:48 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/20 14:01:37 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = malloc (size * sizeof(int));
	if (*range == 0)
		return (-1);
	a = 0;
	while (min < max)
	{
		*(*range + a) = min;
		a++;
		min++;
	}
	return (size);
}

/* int main()
{
	int *range;
	int min;
	int max;
	int range_size;

	min = -5;
	max = 10;
	range_size = ft_ultimate_range(&range, min, max);
	printf("%d", range_size);
	return (0);
} */