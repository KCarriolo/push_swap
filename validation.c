/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:55:44 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:33:10 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	args_validation(char **argv, int args)
{
	check_duplicates(argv);
	check_integers(argv);
	check_int_max(argv);
	check_order(argv, args);
	return ;
}

int	check_duplicates(char **array)
{
	int	i;
	int	j;

	i = 1;
	while (array[i])
	{
		j = i + 1;
		while (array[j])
		{
			if (str_compare(array[i], array[j]))
			{
				ft_printf("%s\n", "Error");
				exit(0);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	check_order(char **argv, int args)
{
	int	i;

	i = 1;
	while (1)
	{
		if (i < args)
		{
			if (ft_atoi(argv[i]) < ft_atoi(argv[i + 1]))
				i++;
			else
				return ;
		}
		else
			exit(1);
	}
}

int	check_integers(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
			else
			{
				ft_printf("%s\n", "Error");
				exit(0);
			}
		}
		i++;
	}	
	return (0);
}

int	check_int_max(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		aux_atoi(ft_atoi(argv[i]));
		i++;
	}	
	return (0);
}
