/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:06:46 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/11 22:43:34 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				a;
	unsigned int	b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	b = 0;
	while (src[b] != 0 && b < nb)
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	*(dest + a) = 0;
	return (dest);
}

/*int main()
{
	char dest[] = "hello123";
	char src[] = "world";
	unsigned int nb;
	int c;

	nb = 4;
	ft_strncat(dest, src, nb);

	c = 0;
	while (dest[c] != 0)
	{
		write(1, &dest[c], 1);
		c++;
	}
	write(1, "\n", 1);
	return 0;
}*/