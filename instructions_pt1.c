/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_pt1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:21:54 by kefernan          #+#    #+#             */
/*   Updated: 2022/11/01 15:07:22 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_stack **stack_a, int n)
{
	t_stack	*temp;

	if (stack_a && *stack_a)
	{
		temp = *stack_a;
		temp = (*stack_a)->next;
		(*stack_a)->next = temp->next;
		temp->next = *stack_a;
		*stack_a = temp;
		if (n == 0)
			write(1, "sa\n", 3);
		return (1);
	}
	return (0);
}

int	sb(t_stack **stack_b, int n)
{
	t_stack	*temp;

	if (stack_b && *stack_b)
	{
		temp = *stack_b;
		temp = (*stack_b)->next;
		(*stack_b)->next = temp->next;
		temp->next = *stack_b;
		*stack_b = temp;
		if (n == 0)
			write(1, "sb\n", 3);
		return (1);
	}
	return (0);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (sa(stack_a, 1) && sb(stack_b, 1))
		write(1, "ss\n", 3);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (stack_b && *stack_b)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		temp->next = NULL;
		lstadd_front_psw(stack_a, temp);
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (stack_a && *stack_a)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = NULL;
		lstadd_front_psw(stack_b, temp);
		write(1, "pb\n", 3);
	}
}
