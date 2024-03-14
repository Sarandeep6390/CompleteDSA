#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void trav();
struct node
{
    int coff;
    int exp;
    struct node *link;
};
struct node *first;
void main()
{
    create();
    trav();
    getch();
}
void create()
{
    struct node *ptr, *cpt;
    int x;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the value of coff and exp\n");
    scanf("%d %d",&ptr->coff,&ptr->exp);
    first=ptr;
    do
    {
        cpt=(struct node*)malloc(sizeof(struct node));
        printf("enter the value of next node\n");
        scanf("%d %d",&cpt->coff,&cpt->exp);
        ptr->link=cpt;
        ptr=cpt;
        printf("enter the choice for more node ");
        scanf("%d",&x);
    } 
    while(x==1);
    ptr->link=NULL;
}
void trav()
{
    struct node *ptr;
    ptr=first;
    while(first->link!=NULL)
    {
        printf(" %d %d",ptr->coff,ptr->exp);
        ptr=ptr->link;
    }
}