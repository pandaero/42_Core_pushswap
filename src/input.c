/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:00:05 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/19 00:30:47 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
#include <stdlib.h>

//Function converts a character array to one compatible with ft_split output.
char	**splitise(char **argv, int argc)
{
	char	**out;
	int		i;

	out = (char **)malloc((argc) * sizeof(char *));
	if (!out)
		return (0);
	i = 0;
	while (i < argc - 1)
	{
		out[i] = ft_strdup(argv[i + 1]);
		i++;
	}
	out[i] = 0;
	return (out);
}
