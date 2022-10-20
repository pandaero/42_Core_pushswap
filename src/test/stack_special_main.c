// Test for functions in stack_special.c
#include "test.h"
#include <stdio.h>
#include <stdlib.h>

/* Test for push_bottom
// run: cc stack_special_main.c ../stack_special.c ../stack_operations.c ../stack_functions.c ../node_functions.c ../memory.c ./test.c ../../libft/libft.a
int	main(void)
{
	t_stack *stack;
	t_node	*node1;
	t_node	*node2;
	t_node	*node3;

	stack = (t_stack *)malloc(sizeof(t_stack));
	node1 = (t_node *)malloc(sizeof(t_node));
	node2 = (t_node *)malloc(sizeof(t_node));
	node3 = (t_node *)malloc(sizeof(t_node));
	node_init(100, node1);
	node_init(50, node2);
	node_init(150, node3);
	push_bottom(node1, stack);
	push_bottom(node2, stack);
	push_bottom(node3, stack);
	printf("Stack:\n");
	stack_display(stack);
	printf("Stack node count: %d\n", stack->nodecount);
	free_stack(stack);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
//*/

/* Test for pop_bottom
// run: cc stack_special_main.c ../stack_special.c ../stack_operations.c ../stack_functions.c ../node_functions.c ../memory.c ./test.c ../../libft/libft.a
int	main(void)
{
	t_stack *stack;
	t_node	*node1;
	t_node	*node2;
	t_node	*node3;

	stack = (t_stack *)malloc(sizeof(t_stack));
	node1 = (t_node *)malloc(sizeof(t_node));
	node2 = (t_node *)malloc(sizeof(t_node));
	node3 = (t_node *)malloc(sizeof(t_node));
	node_init(100, node1);
	node_init(50, node2);
	node_init(150, node3);
	push_bottom(node1, stack);
	push_bottom(node2, stack);
	push_bottom(node3, stack);
	printf("Stack:\n");
	stack_display(stack);
	printf("Stack node count: %d\n", stack->nodecount);
	//Pop
	pop_bottom(stack);
	printf("*Pop bottom*:\n");
	stack_display(stack);
	//Pop
	pop_bottom(stack);
	printf("*Pop bottom*:\n");
	stack_display(stack);
	printf("Stack node count: %d\n", stack->nodecount);
	//Pop
	pop_bottom(stack);
	printf("*Pop bottom*:\n");
	stack_display(stack);
	//Pop
	pop_bottom(stack);
	printf("*Pop Empty bottom*:\n");
	stack_display(stack);
	printf("Stack node count: %d\n", stack->nodecount);
	printf("Done Popping.\n");
	free_stack(stack);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
//*/

/* Test for pop_any
// run: cc stack_special_main.c ../stack_special.c ../stack_operations.c ../stack_functions.c ../node_functions.c ../memory.c ./test.c ../../libft/libft.a
int	main(void)
{
	t_stack *stack;
	t_node	*node1;
	t_node	*node2;
	t_node	*node3;
	t_node	*node4;
	t_node	*select;

	stack = (t_stack *)malloc(sizeof(t_stack));
	node1 = (t_node *)malloc(sizeof(t_node));
	node2 = (t_node *)malloc(sizeof(t_node));
	node3 = (t_node *)malloc(sizeof(t_node));
	node4 = (t_node *)malloc(sizeof(t_node));
	node_init(100, node1);
	node_init(50, node2);
	node_init(150, node3);
	node_init(250, node4);
	push_bottom(node1, stack);
	push_bottom(node2, stack);
	push_bottom(node3, stack);
	push_bottom(node4, stack);
	printf("Stack:\n");
	stack_display(stack);
	printf("Stack node count: %d\n", stack->nodecount);
	select = stack->top->prev;
	pop_any(select, stack);
	printf("Pop second to top:\n");
	stack_display(stack);
	select = stack->top;
	pop_any(select, stack);
	printf("Pop top:\n");
	stack_display(stack);
	printf("Stack node count: %d\n", stack->nodecount);
	select = stack->bottom;
	pop_any(select, stack);
	printf("Pop bottom:\n");
	stack_display(stack);
	printf("Stack node count: %d\n", stack->nodecount);
	select = stack->bottom;
	pop_any(select, stack);
	printf("Pop last:\n");
	stack_display(stack);
	free_stack(stack);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	return (0);
}
//*/
