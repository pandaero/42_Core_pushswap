/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:20:23 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/12 20:50:54 by pandalaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include "./libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	int				pos;
	int				pos_target;
	int				cost_a;
	int				cost_b;
	int				cost_total;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	int		id;
	int		nodecount;
	t_node	*bottom;
	t_node	*top;
}			t_stack;

//Function checks whether a character is a numeric one.
int		isnumeric(char ch);
//Function checks that all the array submembers represent only integers.
int		isarrint(char **charr, int charrsz);
//Function checks that array members contain only digits and numeric symbols.
int		isarrnumeric(char **charr, int charrsz);
//Function checks whether a string contains a valid signed numeric declaration.
int		isvalidnum(char *str);
//Function frees a 2D char array, given its size.
void	free_charr(char **charr, int charrsz);
//Function displays error message on standard error.
int		display_error(void);
//Function turns a string to a long integer type.
long	ft_atol(char *str);

#endif