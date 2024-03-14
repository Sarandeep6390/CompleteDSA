#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void trav();
void insert_beg();
void insert_end();
void insert_given_node();
void insert_in_sorted();
void delete_beg();
void delete_end();
//void delete_given_node();
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
    insert_given_node();
    trav();
    insert_in_sorted();
    trav();
    delete_beg();
    trav();
    delete_end();
    trav();
   // delete_given_node();
    //trav();
    getch();
}
void create()
{
    struct node *ptr, *cpt;
    int x;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nCreate a list\n");
    printf("Input the element of first node ");
    scanf("%d",&ptr->info);
    first=ptr;
    do
    {
        cpt=(struct node*)malloc(sizeof(struct node));
        printf("\nInput the element of next node ");
        scanf("%d",&cpt->info);
        ptr->link=cpt;
        ptr=cpt;
        printf("Enter more choice 0/1 ");
        scanf("%d",&x);
    }
    while(x==1);
    ptr->link=NULL;
}
void trav()
{
    struct node *ptr;
    ptr=first;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
}
void insert_beg()
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("overflow");
    }
    else
    {
        printf("\nInsertion in Beginning\n");
        printf("Enter the new data ");
        scanf("%d",&ptr->info);
        ptr->link=first;
        first=ptr;
    }
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
    {
        printf("\nInsertion in End\n");
        printf("Enter the new data ");
        scanf("%d",&ptr->info);
        cpt=first;
        while(cpt->link!=NULL)
        {
            cpt=cpt->link;
        }
        cpt->link=ptr;
        ptr->link=NULL;
    }
}
void insert_given_node()
{
    struct node *ptr, *cpt;
    int data;
    printf("\nInsertion after a given data\n");
    printf("Enter that data for insert after this ");
    scanf("%d",&data);
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("overflow");
    }
    else
    {
        printf("\nEnter the new data for insert ");
        scanf("%d",&ptr->info);
        cpt=first;
        while(cpt->info!=data)
        {
            cpt=cpt->link;
        }
        ptr->link=cpt->link;
        cpt->link=ptr;
    }
}
void insert_in_sorted()
{
    struct node *ptr, *cpt, *t;
    ptr=(struct node *) malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Overflow");
    }
    else
    printf("\nInsertion in sorted list\n");
    printf("Enter the data for insert in sorted list ");
    scanf("%d", &ptr->info);
    //cpt=first;
    while(cpt->info<ptr->info)
    {
        t=cpt;
        cpt=cpt->link;
    }
    t->link=ptr;
    ptr->link=cpt;
}
void delete_beg()
{
    struct node *ptr;
    printf("\nDeletion in Beginning\n");
    if(first==NULL)
    {
        printf("underflow");
    }
    else
    {
        ptr=first;
        first=ptr->link;
        free(ptr);
    }
}
void delete_end()
{
    struct node *ptr, *cpt;
    printf("\nDeletion in End\n");
    if(first==NULL)
    {
        printf("underflow");
    }
    else
    {
        ptr=first;
        while(ptr->link!=NULL)
        {
            cpt=ptr;
            ptr=ptr->link;
        }
        cpt->link=NULL;
        free(cpt);
    }
}
/*void delete_given_node()
{
    struct node *ptr, *cpt;
    int data;
    if(first=NULL)
    {
        printf("underflow");
    }
    else
    {
        printf("enter data to be deleted");
        scanf("%d",&data);
        ptr=first;
        while(ptr->info!=data)
        {
            cpt=ptr;
            ptr=ptr->link;
        }
        cpt->link=ptr->link;
        free(ptr);
    }
}*/