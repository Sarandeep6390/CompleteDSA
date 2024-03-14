#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
void insert();
void del();
void display();
struct node
{
    int info;
    struct node *link;
};
struct node *front, *rear;
void main()
{
    void insert();
    void display();
    void del();
    void display();
    int ch;
    while(1)
    {
        printf("\n.Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            insert();
            break;
            case 2:
            del();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default: 
            printf("\nPlease enter correct choice: ");
        }
    }
    getch();
}
void insert()
{
    struct node *ptr;
    ptr=(struct node *) malloc(sizeof(struct node));
    int item;
    printf("\nInput the element for inserting: ");
    scanf("%d", &item);
    ptr->info=item;
    ptr->link=NULL;
    if(front==NULL)
    front=ptr;
    else
    rear->link=ptr;
    rear=ptr;

}
void del()
{
    struct node *ptr;
    if(front==NULL)
    {
        printf("Underflow");
        return;
    }
    if(front==rear)
    {
        free(front);
        rear=NULL;
    }
    else
    {
        ptr=front;
        front=ptr->link;
        free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr=front;
    if(front==NULL)
    printf("Queue is empty\n");
    else
    {
        printf("\nElements in the Queue are: \n");
        while(ptr!=NULL)
        {
            printf("%d ", ptr->info);
            ptr=ptr->link;
        }
        printf("\n");
    }
}