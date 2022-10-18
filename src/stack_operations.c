/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:20:34 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/18 15:35:02 by pandalaf         ###   ########.fr       */
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
		stack->top = 0;
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

//Function swaps the top two elements of the stack.
void	swap(t_stack *stack)
{
	int	top;
	int	prev;

	top = stack->top->value;
	prev = stack->top->prev->value;
	pop(stack);
	pop(stack);
	push(top, stack);
	push(prev, stack);
}

//Function moves all elements of the stack up by one, top becomes bottom.
void	rotate(t_stack *stack)
{
	int		*tmparr;
	int		stacksz;
	int		i;
	t_node	*head;

	head = stack->bottom;
	if (head == 0 || stack->bottom == stack->top)
		return ;
	stacksz = stack_size(stack);
	tmparr = (int *)malloc((stacksz) * sizeof(int));
	i = 0;
	while (head != 0)
	{
		tmparr[i] = head->value;
		head = head->next;
		i++;
	}
	stack_pop(stack);
	push(tmparr[stacksz - 1], stack);
	i = -1;
	while (i++ < stacksz - 2)
		push(tmparr[i], stack);
	free(tmparr);
}

/*
//Function moves all elements of the stack down by one, bottom becomes top.
void	reverse_rotate(t_stack *stack)
{

}*/
