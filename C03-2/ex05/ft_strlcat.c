/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:34:02 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/11 22:43:37 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;
	unsigned int	d;

	a = 0;
	while (a < size && dest[a] != 0)
		a++;
	d = a;
	c = 0;
	while (src[c] != 0)
		c++;
	if (a == size)
		return (size + c);
	b = 0;
	while (src[b] != 0 && a < (size - 1))
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = 0;
	return (d + c);
}

/*int main()
{
	char dest[6] = "hello2";
	char src[] = "world1";
	unsigned int size;
	unsigned int a;
	
	size = 6;
	a = ft_strlcat(dest, src, size);
	printf("%d", a);
	printf("\n");

	char x[6] = "hello2";
	char y[] = "world1";
	unsigned int z;

	z = 6;
	a = strlcat(x, y, z);
	printf("%d", a);
	printf("\n");
	printf("%s", x);
}*/