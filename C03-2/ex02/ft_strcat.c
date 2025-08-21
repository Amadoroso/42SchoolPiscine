/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:58:22 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/11 22:43:33 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	while (dest[a] != 0)
	{
		a++;
	}
	b = 0;
	while (src[b] != 0)
	{
		*(dest + a) = *(src + b);
		b++;
		a++;
	}
	*(dest + a) = 0;
	return (dest);
}

/*int main()
{
	char dest[] = "Hello";
	char src[] = "1245";

	
	ft_strcat(dest, src);
	printf("%s", dest);
	printf("%c", '\n');
	
	strcat(dest, src);
	printf("%s", dest);
	return 0;
}*/