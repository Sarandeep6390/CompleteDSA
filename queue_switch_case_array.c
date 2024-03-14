#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define max 100
int q[max],front=-1,rear=-1;
void delete();
void create();
void trav();
void insert();

void main()
{
    int ch=1;
    printf("1.create 2.trav 3.insert  4.delete exit 0");
    while(ch)
    {
        printf("input the choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            create();
            break;
            case 2:
            trav();
            break;
            case 3:
            insert();
            break;
            case 4:
            delete();
            break;
            default:exit(0);
        }

    }
    getch();
}
void create()
{
    front = 0;
    int data,ch;
    do
    {
        rear++;
        printf("input the data in the  Q");
        scanf("%d",&data);
        q[rear]=data;
        printf("input the choice :\n");
        scanf("%d",&ch);
    }while(ch==1);

}
void trav()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d ",q[i]);
    }
}
void insert()
{
    int item;
    if(rear==(max-1))
    {
        printf("overflow");


    }
    else
    {
        printf("input the data to insert in thw\e Q:\n");
        scanf("%d",&item);
        rear++;
        q[rear]=item;

    }
}
void delete()
{
    if(front==-1)
    {
        printf("underflow");
    }
    else if(front==0 && rear==0)
    {
        q[front]=NULL;
        front=-1;
        rear=-1;

    }
    else
    {
        q[front]=NULL;
        front++;

    }
    printf("deletion\n");

}
