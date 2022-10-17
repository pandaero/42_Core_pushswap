/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_pushswap.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:28:36 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/17 11:22:54 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

//Function pushes the top element of stack b to stack a.
void	push_a(t_stack *st_a, t_stack *st_b)
{
	if (st_b->top == 0)
		return ;
	push(st_b->top->value, st_a);
	pop(st_b);
	ft_printf("pa\n");
}

//Function pushes the top element of stack a to stack b.
void	push_b(t_stack *st_a, t_stack *st_b)
{
	if (st_a->top == 0)
		return ;
	push(st_a->top->value, st_b);
	pop(st_a);
	ft_printf("pb\n");
}

//Function swaps the first two elements on a stack a.
void	swap_a(t_stack *st_a)
{
	if (st_a->top == 0 || st_a->top->prev == 0)
		return ;
	swap(st_a);
	ft_printf("sa\n");
}

//Function swaps the first two elements on a stack b.
void	swap_b(t_stack *st_b)
{
	if (st_b->top == 0 || st_b->top->prev == 0)
		return ;
	swap(st_b);
	ft_printf("sb\n");
}

//Function swaps the first two elements of each of two stacks a and b.
void	swap_ab(t_stack *st_a, t_stack *st_b)
{
	if (st_a->top == 0 || st_b->top == 0)
		return ;
	if (st_a->top->prev == 0 || st_b->top->prev == 0)
		return ;
	swap(st_a);
	swap(st_b);
	ft_printf("ss\n");
}
