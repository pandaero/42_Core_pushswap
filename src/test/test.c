// Functions for carrying out tests
#include "test.h"
#include <stdio.h>

//Function to display a stack from top to bottom.
void	stack_display(t_stack *stack)
{
	t_node	*node;

	node = stack->top;
	if (node == 0)
	{
		printf("Empty\n");
		return ;
	}
	while (node != (void *) 0)
	{
		printf("Value: %d\n", node->value);
		node = node->prev;
	}
}
