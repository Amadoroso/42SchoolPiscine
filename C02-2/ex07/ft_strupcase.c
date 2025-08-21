/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:58:38 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/09 16:18:13 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}

/*int main()
{
	char	string[] = "ola pessoal1234PEOPLE+*_-";
	int		a;

	ft_strupcase(string);

	a = 0;
	while (string[a] != '\0')
	{
		write(1, &string[a], 1);
		a++;
	}
	return (0);
}*/

/*
A 65
Z 90

a 97
z 122
*/