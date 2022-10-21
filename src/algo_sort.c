/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:48:10 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/21 03:42:30 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <limits.h>
#include <stdlib.h>

//Function assigns indices to stack elements, in order.
void	indexing(t_stack *stack)
{
	int		ix;
	int		tmpmin;
	t_node	*current;

	ix = 1;
	while (ix <= stack->nodecount)
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

//Function assigns the position of each node.
void	positioning(t_stack *stack)
{
	int		i;
	t_node	*current;

	current = stack->top;
	i = 0;
	while (current != 0)
	{
		current->pos = i;
		current = current->prev;
		i++;
	}
}

//Function calculates the current target position in stack b.
void	targeting(t_stack *stack_a, t_stack *stack_b)
{
	int		pos;
	t_node	*currenta;
	t_node	*currentb;

	currentb = stack_b->bottom;
	while (currentb != 0)
	{
		if (currentb->index > index_max(stack_a))
			currentb->pos_target = stack_index_min(stack_a)->pos;
		else
		{
			currenta = stack_a->bottom;
			while (currenta != 0)
			{
				if (currentb->index == currenta->index - 1)
					currentb->pos_target = currenta->pos;
				if (currenta->next == 0)
					break ;
				currenta = currenta->next;
			}
		}
		if (currentb->next == 0)
			break ;
		currentb = currentb->next;
	}
}

//Function pushes all elements to stack b except 3.
void	initial_push_to_b(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->nodecount != 3)
		push_b(stack_a, stack_b);
}

//Function sorts 3 elements. (Very defined sorting case). Intended for stack a.
void	sort_three_a(t_stack *stack_a)
{
	t_node	*node;

	node = stack_a->bottom->next;
	if (node->next->index > node->index \
		&& node->next->index > node->prev->index)
		rotate_a(stack_a);
	else if (node->index > node->next->index \
			&& node->index > node->prev->index)
		rev_rotate_a(stack_a);
	node = stack_a->bottom->next;
	if (node->next->index > node->index)
		swap_a(stack_a);
}
