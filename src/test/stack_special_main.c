// Test for functions in stack_special.c
#include "test.h"
#include <stdio.h>
#include <stdlib.h>

/* Test for pop_bottom
// run: cc stack_special_main.c ../stack_special.c ../memory.c 
int	main(void)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	push(5, stack);
	push(25, stack);
	push(125, stack);
	printf("Stack:\n");
	stack_display(stack);
	//Pop
	pop_bottom(stack);
	printf("*Pop bottom*:\n");
	stack_display(stack);
	//Pop
	pop_bottom(stack);
	printf("*Pop bottom*:\n");
	stack_display(stack);
	//Pop
	pop_bottom(stack);
	printf("*Pop bottom*:\n");
	stack_display(stack);
	//Pop
	pop_bottom(stack);
	printf("*Pop Empty bottom*:\n");
	stack_display(stack);
	printf("Done Popping.\n");
	free_stack(stack);
	return (0);
}
//*/
