/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:24:38 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/11 20:46:22 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

//Function initialises a stack with id and null values.
void	stack_init(t_stack *stack, int id)
{
	stack->id = id;
	stack->nodecount = 0;
	stack->bottom = 0;
	stack->top = 0;
}

//Function fills stack with values from list.
void	stack_fill(t_stack *stack, int** values, int size)
{
	int	i = 0;

	while (i <= size)
	{
		if (i == 0)
			stack->bottom->value = values[0][i];
		if (i == size)
			stack->top->next = 0;
		i++;
	}
}