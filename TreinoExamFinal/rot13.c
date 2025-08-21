/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:30:20 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/21 18:41:17 by apinho-a         ###   ########.fr       */
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
			if ((*(*(argv + 1) + i) >= 'a' && *(*(argv + 1) + i) <= 'm') 
				|| (*(*(argv + 1) + i) >= 'A' && *(*(argv + 1) + i) <= 'M'))
			{
				c = *(*(argv + 1) + i) + 13;
				write(1, &c, 1);
			}
			else if ((*(*(argv + 1) + i) >= 'n' && *(*(argv + 1) + i) <= 'z') 
				|| (*(*(argv + 1) + i) >= 'n' && *(*(argv + 1) + i) <= 'Z'))
			{
				c = *(*(argv + 1) + i) - 13;
				write(1, &c, 1);
			}
			else 
				write(1, (*(argv + 1) + i), 1);
			i++;
		}	
		write(1, "\n", 1);
	}
	return (0);
}