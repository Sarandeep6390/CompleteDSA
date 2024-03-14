#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void trav();
void insert_beg();
void insert_end();
void cir_del_beg();
void cir_del_end();
struct node
{
int info;
struct node *link;
};
struct node *first;
void main()
{
    create();
    trav();
    insert_beg();
    trav();
    insert_end();
    trav();
    cir_del_beg();
    trav();
    cir_del_end();
    trav();
    getch();
}
void create()
{
    struct node *ptr,*cpt;
    int x;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the element of first node\n");
    scanf("%d",&ptr->info);
    first=ptr;
    do
    {
    cpt=(struct node*)malloc(sizeof(struct node));
    printf("enter element of next node\n");
    scanf("%d",&cpt->info);
    ptr->link=cpt;
    ptr=cpt;
    printf("enter the choice for more node\n");
    scanf("%d",&x);
    }
    while(x==1);
    ptr->link=first;
}
void trav()
{
    struct node *ptr;
    ptr=first;
    while(ptr->link!=first)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
    printf("%d",ptr->info);
}
void insert_beg()
{
    struct node *ptr, *cpt;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
         printf("overflow");
    }
    else
    printf("enter the new data");
    scanf("%d",&ptr->info);
    cpt=first;
    while(cpt->link!=first)
    {
        cpt=cpt->link;
    }
    ptr->link=first;
    first=ptr;
    cpt->link=ptr;
    
}
void insert_end()
{
    struct node *ptr, *cpt;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("overflow");
    }
    else

        printf("enter the new data");
        scanf("%d",&ptr->info);
        cpt=first;
        while(cpt->link!=first)
        {
            cpt=cpt->link;
        }
        cpt->link=ptr;
        ptr->link=first;
}
void cir_del_beg()
{
    struct node *ptr, *cpt;
    if(first==NULL)
    {
        printf("underflow");
    }
    else
    {
        cpt=first;
        while(cpt->link!=first)
        {
            ptr=first;
            cpt=cpt->link;
        }
        first=ptr->link;
        cpt->link=first;
        free(ptr);

    }

}
void cir_del_end()
{
    struct node *ptr, *cpt;
    if(first==NULL)
    {
        printf("underflow");
    }
    else
    {
        cpt=first;
        while(cpt->link!=first)
        {
            ptr=cpt;
            cpt=cpt->link;
        }
        ptr->link=first;
        free(cpt);
    }
}