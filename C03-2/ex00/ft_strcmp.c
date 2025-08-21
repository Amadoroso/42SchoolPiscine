/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:52:11 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/11 22:43:31 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != 0)
		a++;
	return (s1[a] - s2[a]);
}

/*int	main()
{
	char s1[] = "world2";
	char s2[] = "hello1";
	int a;
	int b;

	a = ft_strcmp(s1, s2);
	b = strcmp(s1, s2);

	printf("%i", a);
	printf("%c", '\n');
	printf("%i", b);
	printf("%c", '\n');	
	return (0);
}*/