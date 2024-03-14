#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void PUSH();
void POP();
void display();
struct node
{
    int info;
    struct node *link;
};
struct node *top;
void main()
{
    int ch=1;
    while(ch)
    {
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n 1 PUSH");
            PUSH();
            break;
            case 2:
            printf("\n 2 POP");
            POP();
            break;
            default:
            exit(0);
        }
    }
    getch();
}
/*
void main()
{
    create();
    printf("the initially stack is\n");
    display();
    printf("the element to be pushed in stack ");
    PUSH();
    printf("the next element is ");
    display();
    printf("the next element to be poped in stack ");
    POP();
    printf("the final stack is\n");
    display();
    getch();
}*/
void create()
{
    struct node *ptr,*cpt;
    int x;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the info ");
    scanf("%d",&ptr->info);
    ptr->link=NULL;
    do
    {
       cpt=(struct node*)malloc(sizeof(struct node));
       printf("enter the next node info ");
       scanf("%d",&cpt->info);
       cpt->link=ptr;
       ptr=cpt;
       printf("enter the choice for more node ");
       scanf("%d",&x);
    }
    while(x==1);
    top=ptr;
}
void display()
{
    struct node *ptr;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
}
void PUSH()
{
    struct node *ptr;
    if(ptr==NULL)
    {
        printf("stack is overflow");
    }
    else
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        printf("enter the data ");
        scanf("%d",&ptr->info);
        ptr->link=top;
        top=ptr;
    }
    ptr->link=NULL;
}
void POP()
{
    struct node *ptr;
    if(top==NULL)
    {
        printf("stack is underflow");
    }
    else
    {
        ptr=top;
        top=ptr->link;
        free(ptr);
    }
}
