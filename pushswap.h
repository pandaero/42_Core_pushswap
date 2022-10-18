/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:20:23 by pandalaf          #+#    #+#             */
/*   Updated: 2022/10/19 00:14:49 by pandalaf         ###   ########.fr       */
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

// INPUT CLEANERS
//Function converts a character array to one compatible with ft_split output.
char	**splitise(char **argv, int argc);

// ARRAY VALIDATORS
//Function checks that array members contain only digits and numeric symbols.
int		isarrnumeric(char **charr);
//Function checks that all the array submembers represent only integers.
int		isarrint(char **charr);
//Function checks that there are no duplicate numbers within the main array.
int		isarrdup(char **charr);
//Function checks whether array members are ordered.
int		isarrsorted(char **charr);

// STACK FUNCTIONS
//Function fills a stack with numbers from a valid character array.
void	stack_fill(char **charr, t_stack *stack);
//Function determines the number of elements in a stack.
int		stack_size(t_stack *stack);
//Function pops a stack completely.
void	stack_pop(t_stack *stack);

// INDIVIDUAL VALIDATORS
//Function checks whether a character is a numeric one.
int		isnumeric(char ch);
//Function checks whether a string contains a valid signed numeric declaration.
int		isvalidnum(char *str);

// ALGORITHM OPERATIONS/INSTRUCTIONS
//Function pushes the top element of stack b to stack a.
void	push_a(t_stack *st_a, t_stack *st_b);
//Function pushes the top element of stack a to stack b.
void	push_b(t_stack *st_a, t_stack *st_b);
//Function swaps the first two elements on a stack a.
void	swap_a(t_stack *st_a);
//Function swaps the first two elements on a stack b.
void	swap_b(t_stack *st_b);
//Function swaps the first two elements of each of two stacks a and b.
void	swap_ab(t_stack *st_a, t_stack *st_b);
//Function moves all elements of a stack a up by one.
void	rotate_a(t_stack *st_a);
//Function moves all elements of a stack b up by one.
void	rotate_b(t_stack *st_b);
//Function moves all elements of two stacks a and b up by one.
void	rotate_ab(t_stack *st_a, t_stack *st_b);
//Function moves all elements of a stack a down by one.
void	rev_rotate_a(t_stack *st_a);
//Function moves all elements of a stack b down by one.
void	rev_rotate_b(t_stack *st_b);
//Function moves all elements of two stacks a and b down by one.
void	rev_rotate_ab(t_stack *st_a, t_stack *st_b);

// STACK OPERATIONS
//Function pushes (new) data to the top of the stack.
void	push(int num, t_stack *stack);
//Function pops (removes) the top element of the stack.
void	pop(t_stack	*stack);
//Function swaps the top two elements of the stack.
void	swap(t_stack *stack);
//Function moves all elements of the stack up by one, top becomes bottom.
void	rotate(t_stack *stack);
//Function moves all elements of the stack down by one, bottom becomes top.
void	reverse_rotate(t_stack *stack);

// STACK SPECIAL OPERATIONS
//Function pushes a new item to the bottom of the stack.
void	push_bottom(int	num, t_stack *stack);
//Function pops the bottom element of the stack.
void	pop_bottom(t_stack *stack);

// TYPE CONVERSIONS
//Function turns a string to a long integer type.
long	ft_atol(char *str);

// MEMORY HANDLING
//Function frees a 2D char array, given its size.
void	free_charr(char **charr, int charrsz);
//Function frees a 2D char array made from ft_split.
void	free_split(char **charr);
//Function frees the memory allocated to a stack.
void	free_stack(t_stack *stack);

// ERROR HANDLING
//Function displays error message on standard error.
int		display_error(void);

#endif