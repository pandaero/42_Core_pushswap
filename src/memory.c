/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:20:46 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/12 17:05:32 by pandalaf         ###   ########.fr       */
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
