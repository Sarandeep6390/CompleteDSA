#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void trav();
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
    trav();
    getch();
}
void create()
{
  struct node *ptr, *cpt;
  int x;
  ptr=(struct node*)malloc(sizeof(struct node));
  printf("enter the data of first node");
  scanf("%d",&ptr->info);
  first=ptr;
  do
  {
    cpt=(struct node*)malloc(sizeof(struct node));
    printf("enter the data of next node");
    scanf("%d",&cpt->info);
    ptr->rpt=cpt;
    cpt->lpt=ptr;
    ptr=cpt;
    printf("input choice for more node");
    scanf("%d",&x);
  }
  while(x==1);
  ptr->rpt=first;
  first->lpt=ptr;
}
void trav()
{
    struct node *ptr;
    ptr=first;
    if(first==NULL)
    {
        printf("does not exist");
    }
    else
    {
        while(ptr->rpt!=first)
        {
            printf("%d ",ptr->info);
            ptr=ptr->rpt;
        }
        printf("%d",ptr->info);
    }
}