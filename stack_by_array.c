#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
int stack[max];
int top= -1;
void PUSH();
void POP();
void display();
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
void PUSH()
{
    int data;
    printf("enter the data\n");
    scanf("%d",&data);
    if(top==max-1)
    {
        printf("stack is overflow");
    }
    else
    {
        top=top+1;
        stack[top]=data;
        display();
    }
}
void POP()
{
    if(top<0)
    {
        printf("stack is underflow");
    }
    else
    {
        stack[top]=NULL;
        top=top-1;
        display();
    }
}
void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d \n ",stack[i]);
    }
}

