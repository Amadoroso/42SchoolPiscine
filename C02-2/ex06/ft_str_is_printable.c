/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:37:37 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/10 13:45:02 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
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
			if (*(str + b) >= 32 && *(str + b) <= 126)
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
	char string[] = "\n 1";
	int a;
	char a_;
	
	a = ft_str_is_printable(string);
	
	a_ = a +'0';
	write(1, &a_, 1);
	return (0);
}*/

/* < 32 sao characters nao printable e 127 que = del*/