//Tests for the functions in stack_operations.c
#include "test.h"
#include <stdlib.h>
#include <stdio.h>

/* Test for push
// run: cc stack_ops_main.c ../memory.c ../stack_operations.c
int	main(void)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	push(5, stack);
	push(25, stack);
	push(125, stack);
	printf("Stack:\n");
	stack_display(stack);
	free_stack(stack);
	return (0);
}
//*/

/* Test for pop
// run: cc stack_ops_main.c ../stack_operations.c ../memory.c 
int	main(void)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	push(5, stack);
	push(25, stack);
	push(125, stack);
	printf("Stack:\n");
	stack_display(stack);
	pop(stack);
	printf("*Pop*:\n");
	stack_display(stack);
	pop(stack);
	printf("*Pop*:\n");
	stack_display(stack);
	pop(stack);
	printf("*Pop*:\n");
	stack_display(stack);
	pop(stack);
	printf("*Pop Empty*:\n");
	stack_display(stack);
	printf("Done Popping.\n");
	free_stack(stack);
	return (0);
}
//*/

/* Test for swap
int	main(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	push(100, stack);
	push(50, stack);
	push(150, stack);
	printf("Stack:\n");
	stack_display(stack);
	swap(stack);
	printf("Swapped:\n");
	stack_display(stack);
	free_stack(stack);
	return (0);
}
//*/

/* Test for rotate
// run:
int	main(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	push(105, stack);
	push(210, stack);
	push(555, stack);
	push(333, stack);
	stack_display(stack);
	rotate(stack);
	printf("Rotated:\n");
	stack_display(stack);
	free_stack(stack);	
	return (0);
}
//*/

//* Test for reverse_rotate
// run:
int	main(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	push(105, stack);
	push(210, stack);
	push(555, stack);
	push(333, stack);
	stack_display(stack);
	reverse_rotate(stack);
	printf("Rev. Rotated:\n");
	stack_display(stack);
	free_stack(stack);	
	return (0);
}
//*/
