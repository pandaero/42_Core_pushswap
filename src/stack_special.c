/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_special.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:19:31 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/18 17:56:51 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdlib.h>

//Function pops the bottom element of the stack.
void	pop_bottom(t_stack *stack)
{
	t_node	*node;
	t_node	*current;

	node = stack->bottom;
	if (node == 0)
		return ;
	else if (node->next == 0 && node->prev == 0)
	{
		node = 0;
		stack->top = 0;
		stack->bottom = 0;
		free(node);
	}
	else
	{
		current = stack->bottom->next;
		stack->bottom->prev = 0;
		current->prev = 0;
		stack->bottom = node->next;
		free(node);
	}
}
