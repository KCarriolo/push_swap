/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ordination_radix_ext.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:54:33 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:32:58 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_index(t_stack **stack_a, int x, int args)
{
	int		y;
	t_stack	*aux;
	t_stack	*temp;

	temp = *stack_a;
	while (x++ <= args)
	{
		y = 1;
		aux = *stack_a;
		if (temp->index >= aux->index)
		{
			while (temp->index >= aux->index && y < args)
			{
				if (temp->index != aux->index)
					y++;
				if (y < args)
					aux = aux->next;
			}
			if (y == args)
				return (temp->index);
		}
		temp = temp->next;
	}
	return (0);
}

int	get_index_bits(int index)
{
	int	i;

	i = 0;
	while (index != '\0')
	{
		index = index >> 1;
		i++;
	}
	return (i);
}

void	radix_itself(t_stack **stack_a, t_stack **stack_b, int x)
{
	int	shift;
	int	list_len;
	int	new_list_len;

	shift = 0;
	list_len = lstsize_psw(*stack_a);
	new_list_len = list_len;
	while (!(check_stack_a(stack_a, stack_b, list_len, new_list_len)))
	{
		reverse_move(stack_a, stack_b,
			default_move(stack_a, stack_b, list_len, shift), shift);
		list_len = lstsize_psw(*stack_a);
		shift++;
		if (shift == x)
			shift = 0;
	}
}	

int	default_move(t_stack **stack_a, t_stack **stack_b, int size, int shift)
{
	t_stack	*temp;

	temp = *stack_a;
	while (size-- != 0)
	{
		if (!(temp->index & 1 << shift))
		{
			pb(stack_a, stack_b);
			temp = *stack_a;
		}
		else
		{
			ra(stack_a, 0);
			temp = *stack_a;
		}
	}
	return (lstsize_psw(*stack_b));
}
