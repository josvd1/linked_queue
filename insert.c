#include "queue_functions.h"

void insert()
{
	struct node *ptr;
	int item;

	ptr = (struct node *)malloc(sizeof(struct node));

	if (ptr == NULL)
	{
		printf("Overflow\n");
		return;
	}
	else
	{
		printf("Enter Value:\n");
		scanf("%d", &item);
		ptr -> data = item;

		if (front == NULL)
		{
			front = ptr;
			rear = ptr;
			front -> next = NULL;
			rear -> next = NULL;
		}
		else
		{
			rear -> next = ptr;
			rear = ptr;
			rear -> next = NULL;
		}
	}
}