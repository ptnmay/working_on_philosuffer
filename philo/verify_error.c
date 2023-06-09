/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 02:58:47 by psaeyang          #+#    #+#             */
/*   Updated: 2023/05/18 02:25:26 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	space(char s)
{
	if ((s >= 9 && s <= 13) || s == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while (space(str[i]) == 1)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		while (space(str[i]) == 1)
			i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		return (res * -1);
	return (res);
}

int	philo_error(t_env *env)
{
	if (env)
		free_env(env);
	write(2, "Error\n", 7);
	return (EXIT_FAILURE);
}

int	verify_digit(char n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}

int	verify_av(char **av)
{
	int	i;
	int	j;

	if (ft_atoi(av[1]) > 200)
		return (0);
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (verify_digit(av[i][j]) == 0)
				return (0);
			j++;
		}
		if (ft_atoi(av[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
