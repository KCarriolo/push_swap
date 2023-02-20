/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ordination_until_3.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:07:05 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:33:02 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	all_ord_3(t_stack **stack_a)
{
	if ((*stack_a)->x < (*stack_a)->next->x
		&& (*stack_a)->next->x < (*stack_a)->next->next->x)
		return (0);
	if (ord_3_pattern_1(stack_a))
		return (0);
	if (ord_3_pattern_2(stack_a))
		return (0);
	if (ord_3_pattern_3(stack_a))
		return (0);
	return (0);
}

int	ord_3_pattern_1(t_stack **stack_a)
{
	if ((*stack_a)->x > (*stack_a)->next->x
		&& (*stack_a)->x > (*stack_a)->next->next->x
		&& (*stack_a)->next->x < (*stack_a)->next->next->x)
	{
		ra(stack_a, 0);
		return (1);
	}
	else if ((*stack_a)->x > (*stack_a)->next->x
		&& (*stack_a)->next->x > (*stack_a)->next->next->x)
	{
		ra(stack_a, 0);
		sa(stack_a, 0);
		return (1);
	}
	return (0);
}

int	ord_3_pattern_2(t_stack **stack_a)
{
	if ((*stack_a)->x > (*stack_a)->next->x
		&& (*stack_a)->x < (*stack_a)->next->next->x)
	{
		sa(stack_a, 0);
		return (1);
	}	
	else if ((*stack_a)->x < (*stack_a)->next->x
		&& (*stack_a)->x > (*stack_a)->next->next->x)
	{
		rra(stack_a, 0);
		return (1);
	}
	return (0);
}

int	ord_3_pattern_3(t_stack **stack_a)
{
	if ((*stack_a)->x < (*stack_a)->next->x
		&& (*stack_a)->x < (*stack_a)->next->next->x)
	{
		rra(stack_a, 0);
		sa(stack_a, 0);
		return (1);
	}
	return (0);
}
