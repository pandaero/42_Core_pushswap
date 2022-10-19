/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:48:10 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/19 14:21:36 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

//Function assigns indices to stack elements, in order.
void	index(t_stack stack)
{

}

//Function pushes all elements to stack b except 3.
void	push_to_b(t_stack stack_a,t_stack stack_b)
{
	while (stack_size(stack_a) != 3)
		push_b(stack_b);
}

//Function sorts 3 elements. (Very defined sorting case).
void	sort_three(t_stack stack)
{
	t_node	temp;
	int		*tmp;
	int		i;

	temp = stack->bottom;
	i = 0;
	while (i < stack_size(stack))
	{
		tmp[i] = temp->value;
		temp = temp->next;
		i++;
	}
}
