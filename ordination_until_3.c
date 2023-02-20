/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordination_until_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:34:04 by kefernan          #+#    #+#             */
/*   Updated: 2022/11/01 15:00:37 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ordination_3(t_stack **stack_a, int args)
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
}
