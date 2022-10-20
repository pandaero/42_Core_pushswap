/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:05:09 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/21 00:23:44 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <limits.h>

//Function finds the minimum value in a stack and returns the node's pointer.
t_node	*stack_min(t_stack *stack)
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
