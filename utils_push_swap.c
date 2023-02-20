/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:24:03 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:33:05 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	aux_atoi(long int n)
{
	if (n > 2147483647 || n < -2147483648)
	{
		ft_printf("%s\n", "Error");
		exit(0);
	}
	return (n);
}

void	make_stack_a(t_stack **stack_a, char **str)
{
	int		i;

	i = 1;
	while (str[i])
	{
		lstadd_back_psw(stack_a, lstnew_psw(ft_atoi(str[i])));
		i++;
	}
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (rra(stack_a, 1) && rrb(stack_b, 1))
		write(1, "rrr\n", 4);
}

int	check_and_order_5(t_stack **stack_a, int flag)
{
	t_stack	*temp;
	t_stack	*aux;

	temp = *stack_a;
	while (1)
	{
		aux = *stack_a;
		while (temp->x >= aux->x && temp->next && aux->next)
		{
			aux = aux->next;
		}
		if (!(temp->x >= aux->x))
		{
			temp = temp->next;
			flag++;
		}
		else
			break ;
	}	
	return (flag);
}

void	check_and_order_next_step(t_stack **stack_a, t_stack **stack_b,
			int flag, int x)
{
	if (flag == 1)
		pb (stack_a, stack_b);
	else if (flag == 2)
	{
		sa (stack_a, 0);
		pb (stack_a, stack_b);
	}
	else if (flag == 4)
		check_and_order_next_step_case_4(stack_a, stack_b, x);
	else if (flag == 5)
	{
		rra (stack_a, 0);
		pb (stack_a, stack_b);
	}
	else
	{
		ra (stack_a, 0);
		ra (stack_a, 0);
		pb (stack_a, stack_b);
	}
	return ;
}
