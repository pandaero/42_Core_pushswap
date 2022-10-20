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
