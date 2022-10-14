//Tests for the functions in stack_operations.c
#include "../../pushswap.h"
#include <stdlib.h>
#include <stdio.h>

//Function to display a stack.
void	stack_display(t_node *top_node)
{
	t_node	*node;

	node = top_node;
	while (node != (void *) 0)
	{
		printf("Value: %d\n", node->value);
		node = node->prev;
	}
}

/* Test for push
// run: cc stack_ops_main.c ../memory.c ../stack_operations.c
int	main(void)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	push(5, stack);
	push(25, stack);
	push(125, stack);
	stack_display(stack->top);
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
	stack_display(stack->top);
	printf("First stack above. *Pop*:\n");
	pop(stack);
	stack_display(stack->top);
	printf("*Pop*:\n");
	pop(stack);
	stack_display(stack->top);
	printf("*Pop*:\n");	
	pop(stack);
	stack_display(stack->top);
	printf("*Pop Empty*:\n");
	pop(stack);
	stack_display(stack->top);
	printf("Done Popping.\n");
	free_stack(stack);
	return (0);
}
//*/
