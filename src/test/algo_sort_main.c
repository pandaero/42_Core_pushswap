// Tests for functions in algo_sort.c
#include "test.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* Test for indexing
// run:
int	main(void)
{
	t_stack *stack;
	t_node	*node1;
	t_node	*node2;
	t_node	*node3;
	t_node	*node4;
	t_node	*node5;

	stack = (t_stack *)malloc(sizeof(t_stack));
	node1 = (t_node *)malloc(sizeof(t_node));
	node2 = (t_node *)malloc(sizeof(t_node));
	node3 = (t_node *)malloc(sizeof(t_node));
	node4 = (t_node *)malloc(sizeof(t_node));
	node5 = (t_node *)malloc(sizeof(t_node));
	node_init(100, node1);
	node_init(50, node2);
	node_init(150, node3);
	node_init(INT_MAX, node4);
	node_init(INT_MIN, node5);
	push(node1, stack);
	push(node2, stack);
	push(node3, stack);
	push(node4, stack);
	push(node5, stack);
	printf("Stack:\n");
	stack_display_full(stack);
	printf("Stack nodecnt: %d\n", stack->nodecount);
	indexing(stack);
	stack_display_full(stack);
	free_stack(stack);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
	return (0);
}
//*/
