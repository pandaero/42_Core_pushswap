// Tests for the functions in memory.c
#include "../../pushswap.h"
#include <stdlib.h>

/* Test for free_charr
int	main(void)
{
	char	str[] = "6543 6654 222 1211 33";
	char	**split;

	split = ft_split(str, ' ');
	free_charr(split, ft_nwrds(str, ' '));
	return (0);
}
//*/

/* Test for free_stack
int	main(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	push(5, stack);
	push(45, stack);
	free_stack(stack);
}
//*/