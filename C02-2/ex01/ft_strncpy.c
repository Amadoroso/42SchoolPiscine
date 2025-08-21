/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:38:51 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/09 19:34:06 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

/*int	main()
{	
	char dest[] = "hello";
	char src[] = "wor";
	unsigned int n;
	int b;

	n = 5;
	
	ft_strncpy(dest, src, n);

	b = 0;
	while(*(dest + b) != '\0')
	{
		write (1, &dest[b], 1);
		b++;
	}
	write (1, "\n", 1);
	
	return 0;
}*/