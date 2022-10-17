/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:01:53 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/17 10:13:40 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <limits.h>

//Function checks that array members contain only digits and numeric symbols.
int	isarrnumeric(char **charr, int charrsz)
{
	int	i;
	int	j;

	i = 0;
	while (i < charrsz)
	{
		if (isvalidnum(charr[i]) == 0)
			return (0);
		j = 0;
		while (charr[i][j] != '\0')
		{
			if (isnumeric(charr[i][j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

//Function checks that all the array submembers represent only integers.
int	isarrint(char **charr, int charrsz)
{
	int	i;

	i = 0;
	if (isarrnumeric(charr, charrsz) == 0)
		return (0);
	while (i < charrsz)
	{
		if (ft_atol(charr[i]) > (long) INT_MAX)
			return (0);
		if (ft_atol(charr[i]) < (long) INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

/*
//Function checks that there are no duplicate numbers within the main array.
int	isarrdup(char **charr)
{
	
}

//Function checks whether array members are ordered.
int	isarrsorted(char **charr)
{

}
*/
