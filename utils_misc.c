/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_misc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:20:12 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:32:41 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lstsize_psw(t_stack *lst)
{
	int	i;

	i = 0;
	if (lst)
	{
		i++;
		while (lst->next)
		{
			lst = lst->next;
			i++;
		}
	}
	return (i);
}

void	reverse_move(t_stack **stack_a, t_stack **stack_b,
			int b_size, int shift)
{
	t_stack	*temp;

	temp = *stack_b;
	if (check_stack_b(stack_a, stack_b))
		return ;
	while (b_size-- > 0)
	{
		if (temp->index & 1 << (shift + 1))
		{
			pa(stack_a, stack_b);
			temp = *stack_b;
		}
		else
		{
			rb(stack_b, 0);
			temp = *stack_b;
		}
	}
}	

int	check_stack_a(t_stack **stack_a, t_stack **stack_b,
		int list_size, int new_list_len)
{
	int		x;
	t_stack	*temp;

	x = 0;
	if (list_size == 0)
		return (check_stack_b(stack_a, stack_b));
	temp = *stack_a;
	if (new_list_len == list_size)
	{
		while (temp->index < temp->next->index && x < list_size)
		{
			x++;
			temp = temp->next;
			if ((x + 1) == list_size)
				return (1);
		}	
	}
	return (0);
}

int	check_stack_b(t_stack **stack_a, t_stack **stack_b)
{
	int		x;
	int		list_size_b;
	t_stack	*temp;	

	x = 0;
	temp = *stack_b;
	list_size_b = lstsize_psw(*stack_b);
	while (temp->index > temp->next->index && x < list_size_b)
	{
		x++;
		temp = temp->next;
		if ((x + 1) == list_size_b)
		{
			push_back_a(stack_a, stack_b, list_size_b);
			return (1);
		}
	}
	return (0);
}

void	push_back_a(t_stack **stack_a, t_stack **stack_b, int list_size_b)
{
	int	x;

	x = 0;
	while (x < list_size_b)
	{
		pa(stack_a, stack_b);
		x++;
	}
}
