/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ordination_5_extension.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:05:49 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:32:50 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_and_order_next_step_case_4(t_stack **stack_a,
			t_stack **stack_b, int x)
{
	if (x == 0)
	{
		rra (stack_a, 0);
		rra (stack_a, 0);
		pb (stack_a, stack_b);
	}
	else
	{
		rra (stack_a, 0);
		pb (stack_a, stack_b);
	}
	return ;
}
