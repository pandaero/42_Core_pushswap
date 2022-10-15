// Tests for the functions in memory.c
#include "../../pushswap.h"
#include <stdlib.h>

/* Test for free_charr
// run: cc memory_main.c ../memory.c ../../libft/libft.a
int	main(void)
{
	char	str[] = "6543 6654 222 1211 33";
	char	**charr;

	charr = ft_split(str, ' ');
	free_charr(charr, ft_nwrds(str, ' '));
	return (0);
}
//*/

/* Test for free_split
// run: cc memory_main.c ../memory.c ../../libft/libft.a
int	main(void)
{
	char	str[] = "6543 6654 222 1211 33";
	char	**split;

	split = ft_split(str, ' ');
	free_split(split);
	return (0);
}
//*/

/* Test for free_stack
// run: cc memory_main.c ../memory.c ../stack_operations.c ../../libft/libft.a
int	main(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	push(5, stack);
	push(45, stack);
	free_stack(stack);
}
//*/