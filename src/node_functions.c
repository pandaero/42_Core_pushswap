/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:35:44 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/20 23:37:37 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

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
