#include "queue_functions.h"

int main()
{

	int choice;

	while (choice != 4)
	{
		printf("\n1. Insert an element\n2. Delete an element\n3. Display the queue\n4. Exit\n");
		printf("Enter your choice\n");

		scanf("%d", &choice);

		if (choice < 1 || choice > 4)
		{
			printf("invalid entry, closing program");
			return (0);
		}

		switch(choice)
		{
			case 1:
				insert();
				break;

			case 2:
				delete();
				break;

			case 3:
				display();
				break;

			case 4:
				return(0);
				break;
		}

	}
}