/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:13:49 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/06 20:12:16 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	holder;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		holder = *(tab + start);
		*(tab + start) = *(tab + end);
		*(tab + end) = holder;
		end--;
		start++;
	}
}

/*int	main()
{
	int array[] = {8, 2, 3, 7, 5};
	int size;
	int cnt;
	char char_array_cnt;

	size = 5;
	
	ft_rev_int_tab(array, size);
	
	cnt = 0;
	while (cnt < size)
	{
		char_array_cnt = array[cnt] + '0';
		write(1, &char_array_cnt, 1);
		cnt++;
	}

}*/