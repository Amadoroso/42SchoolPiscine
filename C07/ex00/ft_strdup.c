/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:04:17 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/20 12:17:51 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_string;

	i = 0;
	while (src[i] != 0)
		i++;
	new_string = malloc(i);
	i = 0;
	while (src[i] != 0)
	{
		new_string[i] = src[i];
		i++;
	}
	*(new_string + i) = 0;
	return (new_string);
}

/* int main()
{
	int i;
	char *new_string;
	char *test_string;

	new_string = ft_strdup("Hello brother");
	i = 0;
	while (*(new_string + i) != 0)
	{
		write(1, (new_string + i), 1);
		i++;
	}
	write(1, "\n", 1);
	test_string = strdup("Hello brother");
	i = 0;
	while (*(test_string + i) != 0)
	{
		write(1, (test_string + i), 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
} */