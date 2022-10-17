/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_filling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:35:46 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/17 21:51:53 by pandalaf         ###   ########.fr       */
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
