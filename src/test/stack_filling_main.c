// Tests for functions in stack_filling.c
#include "test.h"
#include <stdlib.h>

/* Test for fill_stack
// run: cc stack_filling_main.c ../memory.c ../stack_filling.c test.c ../stack_operations.c ../../libft/libft.a
int	main(void)
{
	char	**charr;
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	charr = ft_split("1243 2124 23222 443 2131", ' ');
	fill_stack(charr, stack);
	stack_display(stack);
	free_split(charr);
	free_stack(stack);
	return (0);
}
//*/
