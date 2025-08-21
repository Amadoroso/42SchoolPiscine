/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:17:30 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/21 18:28:38 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char c;

	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		i = 0;
		while (*(*(argv + 1) + i) != 0)
		{
			if (*(*(argv + 1) + i) == 'z')
				write(1, "a", 1);
			if (*(*(argv + 1) + i) == 'Z')
				write(1, "A", 1);
			else
			{
				c = *(*(argv + 1) + i) + 1;
				write(1, &c, 1);
			}
			i++;
		}	
		write(1, "\n", 1);
	}
	return (0);
}