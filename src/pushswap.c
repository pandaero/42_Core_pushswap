/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:26:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/31 21:27:18 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

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

//Function runs through the algorithm until stack a is sorted.
static int	algorithm(t_stack *stacka, t_stack *stackb)
{
	while (stack_size(stackb) != 0)
	{
		positioning(stacka);
		positioning(stackb);
		targeting(stacka, stackb);
		costing(stacka, stackb);
		perform_operations(stacka, stackb);
	}
	positioning(stacka);
	rotation_a(stacka);
	return (0);
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
	indexing(stacka);
	if (stack_size(stacka) == 2)
		swap_a(stacka);
	else if (stack_size(stacka) == 3)
		sort_three_a(stacka);
	else
	{
		initial_push_to_b(stacka, stackb);
		sort_three_a(stacka);
		algorithm(stacka, stackb);
	}
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
