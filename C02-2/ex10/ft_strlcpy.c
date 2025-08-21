/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:50:06 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/10 10:31:42 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	int				src_length;

	a = 0;
	src_length = 0;
	while (src[src_length] != 0)
		src_length++;
	if (size > 0)
	{
		while (src[a] != 0 && a < size - 1)
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (src_length);
}

/*int	main()
{
	char src[] = "HELLO";
	char dest[] = "worl4";
	unsigned int size;
	int n;
	
	size = 6;

	ft_strlcpy(dest, src, size);
	
	n = 0;
	while (dest[n] != 0)
	{
		write(1, &dest[n], 1);
		n++;
	}
	return (0);
}*/