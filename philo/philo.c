/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 23:56:47 by psaeyang          #+#    #+#             */
/*   Updated: 2023/05/15 06:52:25 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int ac, char **av)
{
	t_env	*env;

	env = NULL;

	if ((ac == 5 || ac == 6) && verify_av(av) == 1)
	{
		parse_time(ac, av, env);
	}
	else
		print_error();


	// if ((ac != 5 && ac != 6) && (verify_av(av) == 0))
	// 	print_error();
	// if (parse_time(ac, av, env))
	// {
	// 	// printf("here\n");
	// 	return (print_error2(NULL));
	// }
}