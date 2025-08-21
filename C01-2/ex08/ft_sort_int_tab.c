/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:40:41 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/12 15:49:43 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	holder;

	a = 0;
	while (a < size - 1)
	{
		if (tab[a] > tab[a + 1])
		{
			holder = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = holder;
			if (a != 0)
			{
				a--;
			}
		}
		else
		{
			a++;
		}
	}
}

int main()
{
	int array[] = {3, 9, 7, 2, 0};
	int size;
	int cnt;
	char char_array_cnt;

	size = 5;
	
	ft_sort_int_tab(array,size);

	cnt = 0;
	while(cnt < size)
	{	
		char_array_cnt = array[cnt] + '0';
		write(1, &char_array_cnt, 1);
		cnt++;
	}
	return (0);
}
