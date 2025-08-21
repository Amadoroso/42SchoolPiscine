/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:25:06 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/11 22:43:32 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	if (n == 0)
	{
		return (0);
	}
	a = 0;
	while (s1[a] != 0 && s1[a] == s2[a] && a < (n - 1))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

/*int	main()
{
	char s1[] = "hell";
	char s2[] = "odwoakwak2";
	unsigned int n;
	int b;
	int c;

	n = 4;
	
	b = strncmp(s1, s2, n);
	c = ft_strncmp(s1, s2, n);
	printf("%d", b);
	printf("%c", '\n');
	printf("%d", c);
	printf("%c", '\n');
	return (0);
}*/