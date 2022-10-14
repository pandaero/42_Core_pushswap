/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:20:46 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/14 22:39:07 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdlib.h>

//Function frees a 2D char array, given its size.
void	free_charr(char **charr, int charrsz)
{
	int	i;

	i = 0;
	while (i < charrsz)
	{
		free(charr[i]);
		i++;
	}
	free(charr);
}

//Function frees the memory allocated to a stack.
void	free_stack(t_stack *stack)
{
	t_node	*freeing;
	t_node	*temp;

	freeing = stack->top;
	while (freeing != (void *) 0)
	{
		temp = freeing->prev;
		free(freeing);
		freeing = temp;
	}
	free(stack);
}
