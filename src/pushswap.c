/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:26:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/21 13:46:16 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdarg.h>
#include <stdlib.h>

#include <stdio.h>

//Function checks that arguments of a string array are valid.
int	argcheck(char **charr)
{
	if (isarrnumeric(charr) == 0)
		return (display_error());
	if (isarrint(charr) == 0)
		return (display_error());
	if (isarrdup(charr) == 1)
		return (display_error());
	if (isarrsorted(charr) == 1)
		return (display_error());
	return (1);
}

//Function prints a whole stack with its nodes data.
void	stack_display_full(t_stack *stack)
{
	t_node	*node;

	node = stack->top;
	if (node == 0)
	{
		ft_printf("Empty\n");
		return ;
	}
	ft_printf("------------------------Top------------------------\n");
	ft_printf("Val. | Ind. | Pos. | Pos. Tgt. | Cost A | Cost B|\n");
	while (node != 0)
	{
		printf("%5d  %5d  %5d     %5d     %5d    %5d\n", node->value, \
				node->index, node->pos, node->pos_target, node->cost_a, \
				node->cost_b);
		node = node->prev;
	}
}

//Function sorts a list of numbers using two stacks.
static int	pushswap(char **charr)
{
	t_stack	*stacka;
	t_stack	*stackb;

	stacka = 0;
	stackb = 0;
	stacka = stack_init(0, stacka);
	stackb = stack_init(1, stackb);
	stack_fill(charr, stacka);
	stack_display_full(stacka);
	free_stack(stacka);
	free_stack(stackb);
	return (0);
}

//Function runs the main program.
int	main(int argc, char **argv)
{
	char	**charr;

	if (argc < 2)
		return (0);
	else if (argc == 2)
		charr = ft_split(argv[1], ' ');
	else
		charr = splitise(argv, argc);
	if (argcheck(charr) == 0)
	{
		free_split(charr);
		return (0);
	}
	if (pushswap(charr) == -1)
		return (0);
	free_split(charr);
	return (0);
}
