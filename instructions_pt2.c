/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_pt2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:45:00 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:32:28 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ra(t_stack **stack_a, int n)
{
	t_stack	*temp;

	if (stack_a && *stack_a)
	{
		temp = *stack_a;
		temp = temp->next;
		(*stack_a)->next = NULL;
		lstadd_back_psw(&temp, *stack_a);
		*stack_a = temp;
		if (n == 0)
			write(1, "ra\n", 3);
		return (1);
	}
	return (0);
}

int	rb(t_stack **stack_b, int n)
{
	t_stack	*temp;

	if (stack_b && *stack_b)
	{
		temp = *stack_b;
		temp = temp->next;
		(*stack_b)->next = NULL;
		lstadd_back_psw(&temp, *stack_b);
		*stack_b = temp;
		if (n == 0)
			write(1, "rb\n", 3);
		return (1);
	}
	return (0);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (ra(stack_a, 1) && rb(stack_b, 1))
		write(1, "rr\n", 3);
}

int	rra(t_stack **stack_a, int n)
{
	t_stack	*temp;
	t_stack	*last;

	if (stack_a && *stack_a)
	{
		temp = *stack_a;
		last = lstlast_psw(temp);
		while (temp->next->next)
			temp = temp->next;
		temp->next = NULL;
		last->next = *stack_a;
		*stack_a = last;
		if (n == 0)
			write(1, "rra\n", 4);
		return (1);
	}
	return (0);
}

int	rrb(t_stack **stack_b, int n)
{
	t_stack	*temp;
	t_stack	*last;

	if (stack_b && *stack_b)
	{
		temp = *stack_b;
		last = lstlast_psw(temp);
		while (temp->next->next)
			temp = temp->next;
		temp->next = NULL;
		last->next = *stack_b;
		*stack_b = last;
		if (n == 0)
			write(1, "rrb\n", 4);
		return (1);
	}
	return (0);
}
