#include "queue_functions.h"

void delete()
{
	struct node *ptr;

	if (front == NULL)
	{
		printf("Underflow\n");
		return;
	}
	else
	{
		ptr = front;
		front = front -> next;
		free(ptr);
	}
}