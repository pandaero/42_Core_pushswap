/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:20:34 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/14 22:38:02 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdlib.h>

//Function pushes (new) data to the top of the stack.
void	push(int num, t_stack *stack)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	new->value = num;
	if (stack->top == (void *) 0)
	{
		new->prev = (void *) 0;
		stack->bottom = new;
	}
	else
	{
		stack->top->next = new;
		new->next = (void *) 0;
		new->prev = stack->top;
	}
	stack->top = new;
}

//Function pops (removes) the top element of the stack.
void	pop(t_stack	*stack)
{
	t_node	*node;

	node = stack->top;
	if (node == 0)
	{
		return ;
	}
	else if (node->next == 0 && node->prev == 0)
	{
		node = 0;
		stack->bottom = 0;
		free(node);
	}
	else
	{
		stack->top->next = 0;
		stack->top = node->prev;
		free(node);
	}
}
