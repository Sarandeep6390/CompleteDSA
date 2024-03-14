#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void ftrav();
void btrav();
void insert_beg();
void insert_end();
void delete_beg();
void delete_end();
struct node
{
    int info;
    struct node *lpt;
    struct node *rpt;
};
struct node *first;
void main()
{
    create();
    ftrav();
    btrav();
    insert_beg();
    ftrav();
    btrav();
    insert_end();
    ftrav();
    btrav();
    delete_beg();
    ftrav();
    btrav();
    delete_end();
    ftrav();
    btrav();
    getch();
}
void create()
{
    struct node *ptr, *cpt;
    int x;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data of first node");
    scanf("%d",&ptr->info);
    ptr->lpt=NULL;
    first=ptr;
    do
    {
      cpt=(struct node*)malloc(sizeof(struct node));
      printf("Enter the data of next node");
      scanf("%d",&cpt->info);
      ptr->rpt=cpt;
      cpt->lpt=ptr;
      ptr=cpt;
      printf("input the choice for more node");
      scanf("%d",&x);
    }
     while (x==1);
     ptr->rpt=NULL;
}
void ftrav()
{
    struct node *ptr;
    printf("Forward traversing:\n");
    ptr=first;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->info);
        ptr=ptr->rpt;
    }
}
void btrav()
{
    struct node *ptr;
    printf("Backward traversing:\n");
    ptr=first;
    while(ptr->rpt!=NULL)
    ptr=ptr->rpt;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->info);
        ptr=ptr->lpt;
    }
}
void insert_beg()
{
struct node *ptr;
if(ptr==NULL)
ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the data");
scanf("%d",&ptr->info);
ptr->rpt=first;
first->lpt=ptr;
ptr->lpt=NULL;
first=ptr;
}
void insert_end()
{
    struct node *ptr, *cpt;
    if(ptr==NULL)
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&ptr->info);
    cpt=first;
    while(cpt->rpt!=NULL)
    cpt=cpt->rpt;
    cpt->rpt=ptr;
    ptr->lpt=cpt;
    ptr->rpt=NULL;
    printf("Insertion is done\n");
}
void delete_beg()
{
    struct node *ptr;
    if(first==NULL)
    {
        printf("Undeflow");
    }
    else
    ptr=first;
    first=ptr->rpt;
    first->lpt=NULL;
    free(ptr);
    printf("Deletion is done:");
}
void delete_end()
{
    struct node *ptr, *cpt;
    if(first==NULL)
    {
        printf("underflow");
    }
    else
    {
        ptr=first;
        while(ptr->rpt!=NULL)
        {
            cpt=ptr;
            ptr=ptr->rpt;
        }
        cpt->rpt=NULL;
        free(ptr);
        printf("Deletion is done:");
    }
}