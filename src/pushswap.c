/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:26:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/11 21:06:59 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdarg.h>

//Function checks that arguments are valid.
int	argcheck(char **charr)
{
	(check that all are numchars)
	if (isarrdigit(charr) == 0)
		return (0);
	(check that no duplicates)
	if (isarrdup(charr) == 0)
		return (0);
	(check that integers)
	if (isarrint(charr) == 0)
		return (0);
	return (1);
}

//Function sorts a list of numbers using two stacks.
static void	pushswap(char **charr, t_stack *stacka, t_stack *stackb)
{
	if (argcheck(charr) == 0)
		return ;
	
}

//Function runs the main program.
int	main(int argc, char **argv)
{
	char	**charr;
	t_stack	stacka;
	t_stack	stackb;

	if (argc < 2)
		return (0);
	else if (argc == 2)
		charr = ft_split(argv[1], ' ');
	else
		charr = &argv[1];
	pushswap(charr, &stacka, &stackb);
	free(charr);
	return (0);
}
