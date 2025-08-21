/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:21:57 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/10 10:30:32 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 65 && str[a] <= 90))
			str[a] = str[a] + 32;
		a++;
	}
	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 97 && str[a] <= 122)
			&& ((str[a - 1] < 48) || (str[a - 1] == 0)
				|| (str[a - 1] > 57 && str[a - 1] < 65)
				|| (str[a - 1] > 90 && str[a - 1] < 97)
				|| (str[a - 1] > 122 && str[a - 1] < 127)))
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}

/*int main()
{
	char string[] = "hI, hOW|are you? 42words forty-two; fifty+and+one\n";
	int a;

	
	ft_strcapitalize(string);
	
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