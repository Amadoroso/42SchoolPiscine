/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:54:32 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/09 13:58:02 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	b;

	b = 0;
	if (*(str + b) == 0)
	{
		a = 1;
	}
	else
	{
		while (*(str + b) != 0)
		{
			if (*(str + b) >= 65 && *(str + b) <= 90)
			{
				a = 1;
			}
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
	char	string[] = "ANDREDFFE ";
	int		a;
	char	a_;
	
	a = ft_str_is_uppercase(string);

	a_ = a + '0';
	write(1, &a_, 1);
	return (0);
}*/