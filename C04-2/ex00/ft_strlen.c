/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:50:03 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/13 20:29:40 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*(str + a) != 0)
	{
		a++;
	}
	return (a);
}

/*int main()
{
	char *string = "hello";
	int n;
	char n_;

	n = ft_strlen(string);
	n_ = n + '0';
	write(1, &n_, 1);
	write(1, "\n", 1);
	return (0);
}*/