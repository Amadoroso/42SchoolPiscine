/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:25:45 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/10 10:53:22 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	a;
	int		b;

	b = 0;
	while (*(src + b) != '\0')
	{
		a = *(src + b);
		*(dest + b) = a;
		b++;
	}
	*(dest + b) = '\0';
	return (dest);
}

/*int	main()
{
	char dest[] = "world";
	char src[] = "Hello";
	char *dest1;
	
	
	ft_strcpy(dest, src);
	
	dest1 = dest;
	while (*dest1 != '\0')
	{
		write(1, dest1, 1);
		dest1++;
	}
	return 0;

}*/
