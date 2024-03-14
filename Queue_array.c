#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 100
int q[max],front=-1, rear= -1;
void create();
void trav();
void insert();
void delete();
void main()
{
    create();
    printf("the queue is:");
    trav();
    insert();
    printf("the queue after insertion:");
    trav();
    delete();
    printf("the queue after deletion:");
    trav();
    getch();
}
void create()
{
  front=0;
  int x,data;
  do
  {
    rear=rear+1;
    printf("enter the data");
    scanf("%d",&data);
    q[rear]=data;
    printf("%d",&x);
  } 
  while(x==1);
}
void trav()
{
    int i;
    for(i=front+1;i<=rear;i++)
    {
        printf("%d",q[i]);
    }
}
void insert()
{
    int item;
    printf("Enter the item for inserted:\n");
    scanf("%d",&item);
    if(rear==max-1)
    {
        printf("overflow");
    }
    else
    {
    rear=rear+1;
    q[rear]=item;
    }
}
void delete()
{
    if(front==-1)
    {
       printf("overflow");
    }
    if(front==rear)
    {
        q[front]=NULL;
    }
    else
    {
      q[front]=NULL;
      front=front+1;
    }
    printf("Deletion is:\n");
}