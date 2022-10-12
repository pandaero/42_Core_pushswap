/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:26:03 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/12 19:58:09 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdarg.h>

//Function checks that arguments of a string array are valid.
int	argcheck(char **charr, int charrsz)
{
	if (isarrnumeric(charr, charrsz) == 0)
		return(display_error());
	if (isarrint(charr, charrsz)) == 0)
		return (display_error());
	if (isarrdup(charr, charrsz) == 0)
		return (display_error());
	return (1);
}

//Function sorts a list of numbers using two stacks.
static void	pushswap(char **charr, int chsz, t_stack *stacka, t_stack *stackb)
{
	if (argcheck(charr, chsz) == 0)
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
	pushswap(charr, ft_nwrds(argv[1], ' '), &stacka, &stackb);
	free_charr(charr, ft_nwrds(argv[1], ' '));
	return (0);
}
