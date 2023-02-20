/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ordination_radix.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:52:17 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:32:54 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_algorithm(t_stack **stack_a, t_stack **stack_b, int args)
{
	set_index(stack_a, args, 1, 0);
	radix_the_dreadful(stack_a, stack_b, args);
}

void	set_index(t_stack **stack_a, int args, int pos, int ind)
{
	int		x;
	int		y;
	t_stack	*temp;
	t_stack	*aux;

	y = 1;
	aux = *stack_a;
	temp = *stack_a;
	while (y++ <= args)
	{
		x = 1;
		ind = 0;
		aux = *stack_a;
		while (x++ <= args)
		{
			if (temp->x > aux->x)
				ind++;
			aux = aux->next;
		}
		set_position(stack_a, pos, (ind + 1));
		temp = temp->next;
		pos++;
	}
}

void	set_position(t_stack **stack_a, int pos, int ind)
{
	while (pos > 1)
	{
		stack_a = &(*stack_a)->next;
		pos--;
	}
	(*stack_a)->index = ind;
}

void	radix_the_dreadful(t_stack **stack_a, t_stack **stack_b, int args)
{
	int	bits;

	bits = get_index_bits(get_max_index(stack_a, 1, args));
	radix_itself(stack_a, stack_b, bits);
}
