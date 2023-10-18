/* C Program of implement circular linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
        int info;
        struct node *link;
};

struct node *create_list(struct node *last);
void display(struct node *last);
struct node *addtoempty(struct node *last,int data);
struct node *addatend(struct node *last,int data);
struct node *del(struct node *last);

int main( )
{
        int choice,data,item;
        struct node     *last=NULL;

        while(1)
        {
                printf("\n1.Create List\n");
                printf("2.Display\n");
                printf("3.Add to empty list\n");
                printf("4.Add at end\n");
                printf("5.Delete\n");
                printf("6.Quit\n");

                printf("\nEnter your choice : ");
                scanf("%d",&choice);

                switch(choice)
                {
                 case 1:
                        last=create_list(last);
                        break;
                 case 2:
                        display(last);
                        break;
                 case 3:
                        printf("\nEnter the element to be inserted : ");
                        scanf("%d",&data);
                        last=addtoempty(last,data);
                        break;
        
                 case 4:
                        printf("\nEnter the element to be inserted : ");
                        scanf("%d",&data);
                        last=addatend(last,data);
                        break;
                 case 5:
                        del(last);
                        break;
                 case 6:
                        exit(1);
                 default:
                        printf("\nWrong choice\n");
                }/*End of switch*/
        }/*End of while*/

        return 0;

}/*End of main( )*/

struct node *create_list(struct node *last)
{
        int i,n,data;
        printf("\nEnter the number of nodes : ");
        scanf("%d",&n);
        last=NULL;
        if(n==0)
                return last;
        printf("Enter the element to be inserted : ");
        scanf("%d",&data);
        last=addtoempty(last,data);

        for(i=2;i<=n;i++)
        {
                printf("Enter the element to be inserted : ");
                scanf("%d",&data);
                last=addatend(last,data);
        }
        return last;
}/*End of create_list()*/

struct node *addtoempty(struct node *last,int data)
{
        struct node *tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        last=tmp;
        last->link=last;
        return last;
}/*End of addtoempty( )*/

struct node *addatend(struct node *last,int data)
{
        struct node *tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        tmp->link=last->link;
        last->link=tmp;
        last=tmp;
        return last;
}/*End of addatend( )*/

struct node *del(struct node *last)
{
        struct node *tmp,*p;
        if(last==NULL)
        {
                printf("List is empty\n");
                return last;
        }
        if
        {
                tmp=last;
                p->link=last->link;
                last=p;
                free(tmp);
                printf("Node Deleted");
                return 0;
        }
}/*End of del( )*/

void display(struct node *last)
{
        struct node *p;
        if(last==NULL)
        {
                printf("\nList is empty\n");
                return;
        }
        p=last->link;
        do
        {
                printf("%d ",p->info);
                p=p->link;
        }while(p!=last->link);
        printf("\n");
}/*End of display( )*/

// Output:-

// 1.Create List
// 2.Display   
// 3.Add at end
// 4.Delete
// 5.Quit

// Enter your choice : 1

// Enter the number of nodes : 2
// Enter the element to be inserted : 45
// Enter the element to be inserted : 78
// PS D:\Practical> .\a.exe

// 1.Create List
// 2.Display
// 3.Add at end
// 4.Delete
// 5.Quit

// Enter your choice : 2

// List is empty

// 1.Create List
// 2.Display
// 3.Add at end
// 4.Delete
// 5.Quit

// Enter your choice : 3

// Enter the element to be inserted : 34
// PS D:\Practical> gcc .\Circular.c
// PS D:\Practical> .\a.exe

// 1.Create List
// 2.Display
// 3.Add to empty list
// 4.Add at end
// 5.Delete
// 6.Quit

// Enter your choice : 1

// Enter the number of nodes : 2
// Enter the element to be inserted : 34
// Enter the element to be inserted : 65

// 1.Create List
// 2.Display
// 3.Add to empty list
// 4.Add at end
// 5.Delete
// 6.Quit

// Enter your choice : 2
// 34 65 

// 1.Create List
// 2.Display
// 3.Add to empty list
// 4.Add at end
// 5.Delete
// 6.Quit

// Enter your choice : 4

// Enter the element to be inserted : 88

// 1.Create List
// 2.Display
// 3.Add to empty list
// 4.Add at end
// 5.Delete
// 6.Quit

// Enter your choice : 2
// 34 65 88 

// 1.Create List
// 2.Display
// 3.Add to empty list
// 4.Add at end
// 5.Delete
// 6.Quit

// Enter your choice : 5

// Enter the element to be deleted : 65

// 1.Create List
// 2.Display
// 3.Add to empty list
// 4.Add at end
// 5.Delete
// 6.Quit

// Enter your choice : 2
// 34 88 

// 1.Create List
// 2.Display
// 3.Add to empty list
// 4.Add at end
// 5.Delete
// 6.Quit

// Enter your choice : 6
