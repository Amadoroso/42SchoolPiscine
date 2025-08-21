/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:23:17 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/12 12:37:05 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
	{
		write (1, (str + a), 1);
		a++;
	}
}

/*int main()
{
	char *string = "hello";

	ft_putstr(string);
	return (0);
}*/