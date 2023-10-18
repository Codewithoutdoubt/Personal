#include <stdio.h>
#include <stdlib.h>
struct node {
	int info;
	struct node *prev, *next;
};
struct node* start = NULL;
void traverse()
{
	if (start == NULL) {
		printf("List is empty\n");
		return;
	}
	else{
	struct node* temp;
	temp = start;
	while (temp != NULL) {
		printf("Data = %d\n", temp->info);
		temp = temp->next;
	}
}
}
void insertAtFront()
{
	int data;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter number to be inserted: ");
	scanf("%d", &data);
	temp->info = data;
	temp->prev = NULL;
	temp->next = start;
	start = temp;
}

void deleteFirst()
{
	struct node* temp;
    int Data;
	if (start == NULL)
		printf("List is empty\n");
	else {
		temp = start;
		start = start->next;
		if (start != NULL)
			start->prev = NULL;
            Data = temp->info;
        	printf("The %d is Deleted\n",Data);
		free(temp);
	}
}

int main()
{
	int choice;
	while (1) {

		printf("\nManu List :\n\t\t1 Display\n");
		printf("\t\t2 For insertion at"
			" starting\n");
		printf("\t\t3 For deletion of "
			"first element\n");
		printf("\t\t4 To exit\n");
		printf("Enter Choice : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			traverse();
			break;
		case 2:
			insertAtFront();
			break;
		case 3:
			deleteFirst();
			break;
		case 4:
			exit(1);
			break;
		default:
			printf("Incorrect Choice. Try Again \n");
			continue;
		}
	}
	return 0;
}
// ---------------------------------------------------------------------------//
// Output:-
// Manu List :
//                 1 Display
//                 2 For insertion at starting    
//                 3 For deletion of first element
//                 4 To exit
// Enter Choice : 1
// List is empty

// Manu List :
//                 1 Display
//                 2 For insertion at starting
//                 3 For deletion of first element
//                 4 To exit
// Enter Choice : 2
// Enter number to be inserted: 69

// Manu List :
//                 1 Display
//                 2 For insertion at starting
//                 3 For deletion of first element
//                 4 To exit
// Enter Choice : 2
// Enter number to be inserted: 87

// Manu List :
//                 1 Display
//                 2 For insertion at starting
//                 3 For deletion of first element
//                 4 To exit
// Enter Choice : 1
// Data = 87
// Data = 69

// Manu List :
//                 1 Display
//                 2 For insertion at starting
//                 3 For deletion of first element
//                 4 To exit
// Enter Choice : 3
// The 87 is Deleted

// Manu List :
//                 1 Display
//                 2 For insertion at starting
//                 3 For deletion of first element
//                 4 To exit
// Enter Choice : 1
// Data = 69

// Manu List :
//                 1 Display
//                 2 For insertion at starting
//                 3 For deletion of first element
//                 4 To exit
// Enter Choice : 4
// PS D:\Practical>