/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:35:46 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/19 12:54:14 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdlib.h>

//Function fills a stack with numbers from a valid character array.
void	stack_fill(char **charr, t_stack *stack)
{
	int		i;
	t_node	*temp;

	temp = (t_node *)malloc(sizeof(t_node));
	i = 0;
	while (charr[i] != 0)
		i++;
	i--;
	while (i >= 0)
	{
		temp = (ft_atoi(charr[i]), temp);
		push(temp, stack);
		i--;
	}
	free(temp);
}

//Function determines the number of elements in a stack.
int	stack_size(t_stack *stack)
{
	int		i;
	t_node	*current;

	current = stack->bottom;
	if (current == 0)
		return (0);
	i = 1;
	while (current->next != 0)
	{
		current = current->next;
		i++;
	}
	return (i);
}

//Function pops a stack completely.
void	stack_pop(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack->top != 0)
	{
		pop(stack);
		i++;
	}
}

//Function initialises a node with only its value.
void	node_init(int val, t_node *node)
{
	node->value = val;
	node->index = 0;
	node->pos = 0;
	node->pos_target = 0;
	node->cost_a = 0;
	node->cost_b = 0;
}

//Function copies values from one node to another.
void	node_inherit(t_node *dest, t_node *source)
{
	dest->value = source->value;
	dest->index = source->index;
	dest->pos = source->pos;
	dest->pos_target = source->pos_target;
	dest->cost_a = source->cost_a;
	dest->cost_b = source->cost_b;
}
