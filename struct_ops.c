/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:45:40 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 12:32:39 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lstnew_psw(int n)
{
	t_stack	*node;

	node = (t_stack *) malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->x = n;
	node->index = 0;
	node->next = NULL;
	return (node);
}

void	lstadd_front_psw(t_stack **lst, t_stack *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}	
}

void	lstadd_back_psw(t_stack **head, t_stack *new)
{
	t_stack	*last;

	if (head)
	{
		if (*head)
		{
			last = lstlast_psw(*head);
			last->next = new;
		}
		else
			*head = new;
	}
}

t_stack	*lstlast_psw(t_stack *lst)
{
	if (lst)
	{
		while (lst->next)
		{
			if (!lst->next)
				return (lst);
			lst = lst->next;
		}
	}
	return (lst);
}	

void	free_struct(t_stack **struct_x)
{
	t_stack	*temp;

	while (*struct_x)
	{
		temp = (*struct_x)->next;
		free(*struct_x);
		*struct_x = temp;
	}	
}
