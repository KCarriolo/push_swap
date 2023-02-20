/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordinations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:34:04 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:32:33 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ordinations(t_stack **stack_a, t_stack **stack_b, int args)
{
	if (args == 2)
	{
		if ((*stack_a)->x < (*stack_a)->next->x)
			return ;
		else
			sa(stack_a, 0);
	}	
	if (args == 3)
	{
		if (ord_3_pattern_1(stack_a))
			return ;
		if (ord_3_pattern_2(stack_a))
			return ;
		if (ord_3_pattern_3(stack_a))
			return ;
	}
	if (args == 4)
		ordination_4(stack_a, stack_b);
	if (args == 5)
		ordination_5(stack_a, stack_b);
	else if (args > 5)
		radix_algorithm(stack_a, stack_b, args);
}
