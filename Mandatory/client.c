/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:14:00 by mmohamme          #+#    #+#             */
/*   Updated: 2022/03/15 22:15:03 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_byte(char byte, int pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (byte >> i & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(500);
		i--;
	}
}

int	main(int ac, char *av[])
{
	char	*str;
	pid_t	pid;

	if (ac != 3)
	{
		ft_putstr("INCORRECT ARGUMENTS");
		exit(1);
	}
	pid = ft_atoi(av[1]);
	str = av[2];
	while (*str)
	{
		send_byte(*str, pid);
		str++;
	}
	send_byte(0, pid);
	return (0);
}
