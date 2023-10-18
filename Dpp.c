#include <stdio.h>
#include<stdlib.h>
struct node
    {
        int Data;
        struct node *pre , *next;  
    };
struct node* start = NULL;

int insertatbeg()
{
    int item;
    struct node* ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->pre = NULL;
    printf("Enter the value");
    scanf("%d",item);
    ptr->Data = item;
    ptr->next = start;
    start = ptr;
}
int main() {
    int n;
    printf("Enter your choice :");
    scanf("%d",n);
    while (n != 2)
    {
        switch (n)
        {
        case 1:
            insertatbeg();
            break;
        
        default:
        printf("You Enter invailid Choice");
            break;
        }
    }
}