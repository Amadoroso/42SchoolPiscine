/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:00:51 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/20 12:32:18 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	a;

	if (min >= max)
		return (0);
	a = (max - min);
	range = malloc(a * sizeof(int));
	a = 0;
	while (min < max)
	{
		*(range + a) = min;
		min++;
		a++;
	}
	return (range);
}

/* int main()
{
	int *range;
	int min;
	int max;
	int i;
	int a;
	
	min = -10;
	max = -1;
	range = ft_range(min, max);
	a = (max - min);
	i = 0;
	while (i < a)
	{
		printf("%d", *(range + i));
		printf("%s", ",");
		i++;
	}
	return (0);
} */