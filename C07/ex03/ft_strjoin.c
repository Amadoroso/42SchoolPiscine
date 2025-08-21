/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:23:35 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/20 13:56:24 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_malloc_size(int size, char **strs, char *sep)
{
	int	a;
	int	b;
	int	malloc_size;
	int	sep_size;

	malloc_size = 0;
	a = 0;
	while (a < size)
	{
		b = 0;
		while (*(*(strs + a) + b) != 0)
		{
			b++;
			malloc_size++;
		}
		a++;
	}
	sep_size = 0;
	while (*(sep + sep_size) != 0)
		sep_size++;
	return (malloc_size + (sep_size * (size - 1)));
}

char	*ft_string_maker(int size, char **strs, char *new_string, char *sep)
{
	int	a;
	int	b;
	int	c;
	int	word_counter;

	b = 0;
	a = 0;
	word_counter = 0;
	while (a < size)
	{
		c = 0;
		while (*(*(strs + a) + c) != 0)
			*(new_string + b++) = *(*(strs + a) + c++);
		if (++word_counter < size)
		{
			c = 0;
			while (*(sep + c) != 0)
				*(new_string + b++) = *(sep + c++);
		}
		a++;
	}
	*(new_string + b) = 0;
	return (new_string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		malloc_size;
	char	*new_string;

	if (size == 0)
	{
		new_string = malloc(1);
		*new_string = 0;
		return (new_string);
	}
	malloc_size = ft_malloc_size(size, strs, sep);
	new_string = malloc(malloc_size + 1);
	return (ft_string_maker(size, strs, new_string, sep));
}

/* int	main()
{
	char *strings[] = {"hello", "world", "im", "andre"};
	char *sep = "-kdwjaaiw-";
	int size;
	char *new_string;

	size = 4;
	new_string = ft_strjoin(size, strings, sep);
	printf("%s", new_string);
	printf("%s", "\n");
	return (0);
} */