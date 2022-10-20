/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:48:10 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/21 01:07:48 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <limits.h>

//Function assigns indices to stack elements, in order.
void	indexing(t_stack *stack)
{
	int		ix;
	int		tmpmin;
	t_node	*current;

	ix = 1;
	while (ix <= 3)
	{
		current = stack->bottom;
		tmpmin = INT_MAX;
		while (current != 0)
		{
			if (current->index == 0 && current->value < tmpmin)
				tmpmin = current->value;
			if (current->next == 0)
				break ;
			current = current->next;
		}
		while (current != 0)
		{
			if (current->index == 0 && current->value == tmpmin)
				current->index = ix;
			current = current->prev;
		}
		ix++;
	}
}

/*
//Function pushes all elements to stack b except 3.
void	push_to_b(t_stack stack_a,t_stack stack_b)
{
	while (stack_size(stack_a) != 3)
		push_b(stack_b);
}

//Function sorts 3 elements. (Very defined sorting case).
void	sort_three(t_stack stack)
{
	t_node	temp;
	int		*tmp;
	int		i;

	temp = stack->bottom;
	i = 0;
	while (i < stack_size(stack))
	{
		tmp[i] = temp->value;
		temp = temp->next;
		i++;
	}
}
*/
