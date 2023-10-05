#include "queue_functions.h"

void display()
{
	struct node *ptr;
	ptr = front;

	if (front == NULL)
	{
		printf("Empty Queue\n");
	}
	else
	{
		while (ptr != NULL)
		{
			printf("\n%d\n", ptr -> data);
			ptr = ptr -> next;
		}
	}
}