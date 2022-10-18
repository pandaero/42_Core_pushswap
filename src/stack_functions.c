/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:35:46 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/18 13:35:42 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

//Function fills a stack with numbers from a valid character array.
void	fill_stack(char **charr, t_stack *stack)
{
	int	i;

	i = 0;
	while (charr[i] != 0)
		i++;
	i--;
	while (i >= 0)
	{
		push(ft_atoi(charr[i]), stack);
		i--;
	}
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
