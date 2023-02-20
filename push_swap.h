/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:12:37 by kefernan          #+#    #+#             */
/*   Updated: 2022/12/15 11:57:40 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				x;
	int				index;
	struct s_stack	*next;	
}	t_stack;

void	args_validation(char **argv, int args);

int		check_duplicates(char **array);

int		str_compare(char *str_1, char *str_2);

int		check_integers(char **argv);

int		check_int_max(char **argv);

void	check_order(char **argv, int args);

int		aux_atoi(long int n);

void	make_stack_a(t_stack **stack_a, char **str);

t_stack	*lstnew_psw(int n);

void	lstadd_front_psw(t_stack **lst, t_stack *new);

void	lstadd_back_psw(t_stack **head, t_stack *new);

t_stack	*lstlast_psw(t_stack *lst);

int		lstsize_psw(t_stack *lst);

void	free_struct(t_stack **struct_x);

int		sa(t_stack **stack_a, int n);

int		sb(t_stack **stack_b, int n);

void	ss(t_stack **stack_a, t_stack **stack_b);

void	pa(t_stack **stack_a, t_stack **stack_b);

void	pb(t_stack **stack_a, t_stack **stack_b);

int		ra(t_stack **stack_a, int n);

int		rb(t_stack **stack_b, int n);

void	rr(t_stack **stack_a, t_stack **stack_b);

int		rra(t_stack **stack_a, int n);

int		rrb(t_stack **stack_b, int n);

void	rrr(t_stack **stack_a, t_stack **stack_b);

void	ordinations(t_stack **stack_a, t_stack **stack_b, int args);

int		ord_3_pattern_1(t_stack **stack_a);

int		ord_3_pattern_2(t_stack **stack_a);

int		ord_3_pattern_3(t_stack **stack_a);

int		all_ord_3(t_stack **stack_a);

void	ordination_4(t_stack **stack_a, t_stack **stack_b);

void	first_pb_ord_4_and_5(t_stack **stack_a, t_stack **stack_b);

void	push_back_ord_5(t_stack **stack_a, t_stack **stack_b);

void	ordination_5(t_stack **stack_a, t_stack **stack_b);

int		check_and_order_5(t_stack **stack_a, int flag);

void	check_and_order_next_step(t_stack **stack_a, t_stack **stack_b,
			int flag, int x);

void	check_and_order_next_step_case_4(t_stack **stack_a,
			t_stack **stack_b, int x);

void	radix_algorithm(t_stack **stack_a, t_stack **stack_b, int args);

void	set_index(t_stack **stack_a, int args, int pos, int ind);

void	set_position(t_stack **stack_a, int pos, int ind);

void	radix_the_dreadful(t_stack **stack_a, t_stack **stack_b, int args);

int		get_max_index(t_stack **stack_a, int x, int args);

int		get_index_bits(int index);

void	radix_itself(t_stack **stack_a, t_stack **stack_b, int x);

int		default_move(t_stack **stack_a, t_stack **stack_b, int args, int shift);

void	reverse_move(t_stack **stack_a, t_stack **stack_b,
			int b_size, int shift);

int		check_stack_a(t_stack **stack_a, t_stack **stack_b,
			int list_size, int new_list_size);

int		check_stack_b(t_stack **stack_a, t_stack **stack_b);

void	push_back_a(t_stack **stack_a, t_stack **stack_b, int list_size_b);

#endif
