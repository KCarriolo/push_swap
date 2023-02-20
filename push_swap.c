/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:12:57 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:32:36 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	if (argc == 1)
		exit(0);
	args_validation(argv, (argc - 1));
	make_stack_a(&stack_a, argv);
	ordinations(&stack_a, &stack_b, (argc - 1));
	free_struct(&stack_a);
	free_struct(&stack_b);
	return (0);
}
