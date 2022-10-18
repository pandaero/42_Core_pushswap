/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_special.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:19:31 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/18 18:36:58 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdlib.h>

//Function pushes a new item to the bottom of the stack.
void	push_bottom(int num, t_stack *stack)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	new->value = num;
	if (stack->bottom == 0)
	{
		new->prev = 0;
		new->next = 0;
		stack->top = new;
	}
	else
	{
		stack->bottom->prev = new;
		new->prev = 0;
		new->next = stack->bottom;
	}
	stack->bottom = new;
}

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
