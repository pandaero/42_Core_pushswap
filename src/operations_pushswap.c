/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_pushswap.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:28:36 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/14 16:11:52 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

//Function pushes the top element of stack b to stack a.
void	push_a(t_stack *st_a, t_stack *st_b)
{

}

//Function pushes the top element of stack a to stack b.
void	push_b(t_stack *st_a, t_stack *st_b)
{

}

//Function swaps the first two elements on a stack a.
void	swap_a(t_stack *st_a)
{
	t_node	*temp;
	
	if (st_a->bottom == 0 || (st_a + 1)->bottom == 0)
		ft_printf("Cannot swap stack with less than 2 elements\n");
	temp = st_a->bottom->next;
	st_a->bottom->next = temp;
	st_a->bottom->next = st_a->bottom;
	st_a->bottom = temp;
	ft_printf("sa\n");
}

//Function swaps the first two elements on a stack b.
void	swap_b(t_stack *st_b)
{

}

//Function swaps the first two elements of each of two stacks a and b.
void	swap_ab(t_stack *st_a, t_stack *st_b)
{

}
