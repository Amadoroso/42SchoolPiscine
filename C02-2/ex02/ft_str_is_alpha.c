/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:48:00 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/09 13:52:29 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	a;
	int	b;

	b = 0;
	if (*(str + b) == '\0')
	{
		a = 1;
	}
	else
	{
		while (*(str + b) != '\0')
		{
			if ((*(str + b) >= 65 && *(str + b) <= 90))
				a = 1;
			else if (*(str + b) >= 97 && *(str + b) <= 122)
				a = 1;
			else
			{
				a = 0;
				break ;
			}
			b++;
		}
	}
	return (a);
}

/*int main()
{
	char	string[] = "";
	int		a;
	char	a_;
	
	a = ft_str_is_alpha(string);

	a_ = a + '0';
	write(1, &a_, 1);
	return (0);
}*/

/*
A 65
Z 90

a 97
z 122
*/