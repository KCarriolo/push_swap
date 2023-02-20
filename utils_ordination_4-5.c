/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ordination_4-5.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:04:33 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:32:44 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ordination_4(t_stack **stack_a, t_stack **stack_b)
{
	first_pb_ord_4_and_5(stack_a, stack_b);
	all_ord_3(stack_a);
	pa (stack_a, stack_b);
	ra (stack_a, 0);
	return ;
}

void	first_pb_ord_4_and_5(t_stack **stack_a, t_stack **stack_b)
{
	int	i;

	i = 1;
	while (i != 0)
	{
		ra (stack_a, 0);
		if ((*stack_a)->x > (*stack_a)->next->x
			&& (*stack_a)->x > (*stack_a)->next->next->x
			&& (*stack_a)->x > (*stack_a)->next->next->next->x)
		{
			pb (stack_a, stack_b);
			i--;
		}
	}
}

void	push_back_ord_5(t_stack **stack_a, t_stack **stack_b)
{
	pa (stack_a, stack_b);
	ra (stack_a, 0);
	pa (stack_a, stack_b);
	ra (stack_a, 0);
}

void	ordination_5(t_stack **stack_a, t_stack **stack_b)
{
	int	ret;
	int	i;
	int	x;

	i = 2;
	x = 0;
	while (i-- != 0)
	{	
		ret = check_and_order_5(stack_a, 1);
		check_and_order_next_step(stack_a, stack_b, ret, x);
		x++;
	}
	all_ord_3(stack_a);
	push_back_ord_5(stack_a, stack_b);
}

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
