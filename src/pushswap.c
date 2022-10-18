/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:26:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/19 00:49:37 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdarg.h>
#include <stdlib.h>

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

//Function sorts a list of numbers using two stacks.
static int	pushswap(char **charr)
{
	t_stack	*stacka;
	t_stack	*stackb;

	stacka = (t_stack *)malloc(sizeof(t_stack));
	stackb = (t_stack *)malloc(sizeof(t_stack));
	if (!stacka || !stackb)
	{
		ft_printf("Memory can't be allocated.\n");
		return (-1);
	}
	ft_printf("Got to pushswap\n");
	stack_fill(charr, stacka);
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
