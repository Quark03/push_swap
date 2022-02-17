#include "../push_swap.h"

void initialize_list(t_stack *list, int number)
{
	list = (t_stack *)malloc(sizeof(t_stack));
	list->next = NULL;
	list->content = number;
}

t_stack *create_node(int number)
{
	t_stack *temp;

	temp = malloc(sizeof(t_stack));
	temp->next = NULL;
	temp->content = number;
	return temp;
}

void add_node_to_end(t_stack *first, int number)
{
	t_stack *new;
	t_stack *temp;

	new = create_node(number);
	temp = first;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}