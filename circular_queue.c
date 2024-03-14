#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 6
int q[max], front=-1, rear=-1;
void insert();
void del();
void trav();
void main()
{
    int ch;
    while(1)
    {
        printf("Enter your choice: ");
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
            trav();
            break;
            case 4:
            exit(0);
            default:
            printf("Enter wrong choice: ");
        }
    }
    getch();
}
void insert()
{
    int data;
    if((front==0&&rear==max-1)||front==rear+1)
    {
        printf("Overflow");
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        if(rear==max-1)
        {
            rear=0;
        }
        else
        rear=rear+1;
    }
    printf("Enter the data for insertion\n");
    scanf("%d", &data);
    q[rear]=data;
}
void del()
{
    if(front==-1)
    {
        printf("Underflow");
    }
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    if(front==max-1)
    {
        q[front]=NULL;
        front=0;
    }
    else
    {
        q[front]=NULL;
        front=front+1;
    }
}
void trav()
{
    int f_pos, r_pos;
    f_pos=front;
    r_pos=rear;
    if(front==-1)
    {
        printf("\nQueue is empty\n");
    }
    printf("\nQueue elements are:\n");
    if(f_pos<=r_pos)
    while(f_pos<=r_pos)
    {
        printf("%d ", q[f_pos]);
        f_pos++;
    }
    else
    {
        while(f_pos<=max-1)
        {
            printf("%d ", q[f_pos]);
            f_pos++;
        }
        f_pos=0;
        while(f_pos<=r_pos)
        {
            printf("%d ", q[f_pos]);
            f_pos++;
        }
    }
printf("\n");
}