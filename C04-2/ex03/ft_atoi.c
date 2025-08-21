/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:21:25 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/20 14:06:10 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	neg_cnt;
	int	nb;

	nb = 0;
	neg_cnt = 0;
	index = 0;
	while (str[index] <= 32)
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			neg_cnt++;
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57)
	{
		nb = nb * 10 + (str[index] - '0');
		index++;
	}
	if (neg_cnt % 2 != 0)
		nb = nb * -1;
	return (nb);
}
/* int	main()
{
	char string[] = "  ---+--+a1234ab567";
	int nb;

	nb = ft_atoi(string);
	ft_putnbr(nb);
	return (0);
} */