/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:45:58 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/14 17:01:23 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;
	int	c;

	b = 0;
	if (to_find[b] == 0)
		return (str);
	a = 0;
	while (str[a] != 0)
	{
		c = a;
		b = 0;
		while (str[c] == to_find[b])
		{
			c++;
			b++;
			if (to_find[b] == 0)
				return (str + a);
		}
		a++;
	}
	return (0);
}

/*int main()
{
	char	needle[] = "hello";
	char	haystack[] = "123h82hhello424";
	char	*x;
	
	x = ft_strstr(haystack, needle);
	printf("%s", x);
	printf("%c", '\n');
	return (0);
}*/