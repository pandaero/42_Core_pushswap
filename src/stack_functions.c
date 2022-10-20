/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:35:46 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/20 23:39:48 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdlib.h>

//Funcion initialises a stack with only its id.
void	stack_init(int id, t_stack *stack)
{
	stack->id = id;
	stack->nodecount = 0;
	stack->bottom = 0;
	stack->top = 0;
}

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
