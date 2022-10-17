/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:26:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/17 22:11:14 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdarg.h>
#include <stdlib.h>

//Function checks that arguments of a string array are valid.
int	argcheck(char **charr)
{
	if (isarrnumeric(charr) == 0)
		return(display_error());
	if (isarrint(charr) == 0)
		return (display_error());
	if (isarrdup(charr) == 0)
		return (display_error());
	return (1);
}

//Function sorts a list of numbers using two stacks.
static void	pushswap(char **charr, t_stack *stacka, t_stack *stackb)
{
	if (argcheck(charr) == 0)
		return ;
	fill_stack(charr, stacka);
	fill_stack(charr, stackb);
}

//Function runs the main program.
int	main(int argc, char **argv)
{
	char	**charr;
	t_stack	*stacka;
	t_stack	*stackb;

	if (argc < 2)
		return (0);
	else if (argc == 2)
		charr = ft_split(argv[1], ' ');
	else
		charr = &argv[1];
	stacka = (t_stack *)malloc(sizeof(t_stack));
	stackb = (t_stack *)malloc(sizeof(t_stack));
	if (!stacka || !stackb)
	{
		display_error();
		return (0);
	}
	pushswap(charr, stacka, stackb);
	free_split(charr);
	free_stack(stacka);
	free_stack(stackb);
	return (0);
}
