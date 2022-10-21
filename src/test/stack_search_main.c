// Tests for functions in stack_search.c
#include "test.h"
#include <stdio.h>
#include <stdlib.h>

/* Test for stack_min
// run: cc stack_search_main.c ../stack_search.c ../node_functions.c ../stack_operations.c ../stack_special.c ../memory.c test.c
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
	push(node1, stack);
	push(node2, stack);
	push(node3, stack);
	printf("Stack:\n");
	stack_display(stack);
	node_display(stack_min(stack));
	free_stack(stack);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
//*/

/* Test for stack_index_min
// run: cc stack_search_main.c ../stack_search.c ../stack_operations.c ../stack_functions.c ../stack_special.c ../algo_preparation.c ../operations_pushswap.c ../operations_reverse_rotate.c ../operations_rotate.c ../algo_execution.c ../node_functions.c ../numbers.c ../memory.c test.c ../../libft/libft.a
int	main(void)
{
	t_stack *stack;
	t_node	*node1;
	t_node	*node2;
	t_node	*node3;
	t_node	*node4;
	t_node	*node5;
	t_node	*minnode;

	stack = stack_init(0, stack);
	node1 = node_init(100, node1);
	node2 = node_init(50, node2);
	node3 = node_init(350, node3);
	node4 = node_init(150, node4);
	node5 = node_init(250, node5);
	minnode = (t_node *)malloc(sizeof(t_node));
	push(node1, stack);
	push(node2, stack);
	push(node3, stack);
	push(node4, stack);
	push(node5, stack);
	indexing(stack);
	pop_bottom(stack);
	pop_bottom(stack);
	positioning(stack);
	printf("Stack:\n");
	stack_display_full(stack);
	printf("Min. Index:\n");
	node_display(stack->top);
	node_display(stack->bottom);
	node_display(stack_index_min(stack));
	free_stack(stack);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
	return (0);
}
//*/

/* Test for stack_issorted
// run: cc stack_search_main.c ../stack_search.c ../stack_operations.c ../stack_functions.c ../stack_special.c ../algo_preparation.c ../operations_pushswap.c ../operations_reverse_rotate.c ../operations_rotate.c ../algo_execution.c ../node_functions.c ../numbers.c ../memory.c test.c ../../libft/libft.a
int	main(void)
{
	t_stack *stack;
	t_node	*node1;
	t_node	*node2;
	t_node	*node3;
	t_node	*node4;
	t_node	*node5;
	t_node	*minnode;

	stack = stack_init(0, stack);
	node1 = node_init(350, node1);
	node2 = node_init(250, node2);
	node3 = node_init(150, node3);
	node4 = node_init(100, node4);
	node5 = node_init(50, node5);
	minnode = (t_node *)malloc(sizeof(t_node));
	push(node1, stack);
	push(node2, stack);
	push(node3, stack);
	push(node4, stack);
	push(node5, stack);
	indexing(stack);
	positioning(stack);
	printf("Stack:\n");
	stack_display_full(stack);
	printf("Stack is sorted: %d\n", stack_issorted(stack));
	free_stack(stack);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
	return (0);
}
//*/
