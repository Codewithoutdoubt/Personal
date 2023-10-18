#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
node *start = NULL, *end = NULL, *temp_data;
void insertatlast();
void del_node();
void display_node();
int main()
{
    int choice;
    do
    {
        printf("\nMenu\n1 Insert at last :");
        printf("\n2 Delete node : ");
        printf("\n3 Print list : ");
        printf("\n4 Exit: ");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertatlast();
            break;
        case 2:
            del_node();
            break;
        case 3:
            display_node();
            break;
        case 4:
            return 1;
        default:
            printf("\nEntered choice is invalid :");
        }
    } while (1);
    return 0;
}
void insertatlast()
{
    node *n_node;
    n_node = (node *)malloc(sizeof(node));
    printf("\nEnter value : ");
    scanf("%d", &n_node->data);
    n_node->next = NULL;
    if (end == NULL)
        start = end = n_node;
    else
    {
        end->next = n_node;
        end = n_node;
    }
    end->next = start;
}
void del_node()
{
    temp_data = start;
    if (start == NULL)
        printf("\nCircular linked list is Underflow :");
    else
    {
        if (start == end)
        {
            printf("\n%d", start->data);
            start = end = NULL;
        }
        else
        {
            printf("%d has Deleted\n", start->data);
            start = start->next;
            end->next = start;
        }
        temp_data->next = NULL;
        free(temp_data);
    }
}
void display_node()
{
    temp_data = start;
    if (start == NULL)
        printf("\nCircular linked list is Empty");
    else
    {
        printf("The list Data is : \n");
        for (;temp_data != end; temp_data = temp_data->next)
            printf("%d\n", temp_data->data);
        printf("%d\n", temp_data->data);
    }
}

// Output:-

// Menu
// 1 Insert at last :
// 2 Delete node : 
// 3 Print list :  
// 4 Exit:
// Enter Choice: 1 

// Enter value : 56

// Menu
// 1 Insert at last :
// 2 Delete node :   
// 3 Print list :    
// 4 Exit:
// Enter Choice: 1   

// Enter value : 89

// Menu
// 1 Insert at last :
// 2 Delete node :   
// 3 Print list :
// 4 Exit:
// Enter Choice: 1

// Enter value : 24

// Menu
// 1 Insert at last :
// 2 Delete node :
// 3 Print list :
// 4 Exit:
// Enter Choice: 3
// The list Data is : 
// 56
// 89
// 24

// Menu
// 1 Insert at last :
// 2 Delete node :
// 3 Print list :
// 4 Exit:
// Enter Choice: 2
// 56 has Deleted

// Menu
// 1 Insert at last :
// 2 Delete node :
// 3 Print list :
// 4 Exit:
// Enter Choice: 3
// The list Data is : 
// 89
// 24

// Menu
// 1 Insert at last :
// 2 Delete node :
// 3 Print list :
// 4 Exit:
// Enter Choice: 4