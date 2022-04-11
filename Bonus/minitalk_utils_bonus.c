/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:16:55 by mmohamme          #+#    #+#             */
/*   Updated: 2022/03/15 22:16:59 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long	i;

	i = nb;
	if (i < 0)
	{
		i = -i;
		ft_putchar('-');
	}
	if (i <= 9)
	{
		ft_putchar(i + '0');
	}
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	result;

	i = 0;
	s = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while ((str[i] <= '9' && str[i] >= '0') && str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * s);
}
