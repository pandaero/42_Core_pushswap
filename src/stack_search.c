/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:05:09 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/21 03:38:49 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <limits.h>

//Function finds the minimum value in a stack and returns the node's pointer.
t_node	*stack_value_min(t_stack *stack)
{
	int		tmpmin;
	t_node	*current;

	current = stack->bottom;
	tmpmin = INT_MAX;
	while (current->next != 0)
	{
		if (current->value < tmpmin)
			tmpmin = current->value;
		current = current->next;
	}
	while (current->prev != 0)
	{
		if (current->value == tmpmin)
			return (current);
		current = current->prev;
	}
}

//Function finds the minimum value in a stack and returns the node's pointer.
t_node	*stack_index_min(t_stack *stack)
{
	int		tmpmin;
	t_node	*current;

	current = stack->bottom;
	tmpmin = INT_MAX;
	while (current->next != 0)
	{
		if (current->index < tmpmin)
			tmpmin = current->index;
		current = current->next;
	}
	while (current->prev != 0)
	{
		if (current->index == tmpmin)
			return (current);
		current = current->prev;
	}
}

//Function determines the minimum index present in the stack.
int	index_min(t_stack *stack)
{
	int		tmpmin;
	t_node	*current;

	current = stack->top;
	tmpmin = INT_MAX;
	while (current != 0)
	{
		if (current->index < tmpmin)
			tmpmin = current->index;
		if (current->prev == 0)
			break ;
		current = current->prev;
	}
	return (tmpmin);
}

//Function determines the maximum index present in the stack.
int	index_max(t_stack *stack)
{
	int		tmpmax;
	t_node	*current;

	current = stack->top;
	tmpmax = INT_MIN;
	while (current != 0)
	{
		if (current->index > tmpmax)
			tmpmax = current->index;
		if (current->prev == 0)
			break;
		current = current->prev;
	}
	return (tmpmax);
}
