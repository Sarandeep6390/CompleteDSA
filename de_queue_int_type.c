#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 6
int q[max], left=-1, right=-1;
void insert_right();
void insert_left();
void del_right();
void del_left();
void trav();
void main()
{
    int ch;
    printf("insert_right(1)\n");
    printf("insert_left(2)\n");
    printf("delete_right(3)\n");
    printf("delete_left(4)\n");
    printf("traverse(5)\n");
    printf("exit(6)\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            insert_right();
            break;
            case 2:
            insert_left();
            break;
            case 3:
            del_right();
            break;
            case 4:
            del_left();
            break;
            case 5:
            trav();
            break;
            case 6:
            exit(0);
            default:
            printf("Enter wrong choice: ");
        }
    }
    getch();
}
void insert_right()
{
    int data;
    if((left==0&&right==max-1)||left==right+1)
    {
        printf("Overflow");
    }
    if(left==-1)
    {
        left=0;
        right=0;
    }
    else
    {
        if(right==max-1)
        {
            left=0;
        }
        else
        right=right+1;
    }
    printf("Enter the data for insertion_right\n");
    scanf("%d", &data);
    q[right]=data;
}
void insert_left()
{
    int data;
    if((left==0&&right==max-1)||left==right+1)
    {
        printf("Overflow");
    }
    if(left==-1)
    {
        left=0;
        right=0;
    }
    else
    {
        if(left==0)
        {
            left=max-1;
        }
        else
        {
        left=left-1;
        }
    }
    printf("Enter the data for insertion_left\n");
    scanf("%d", &data);
    q[left]=data;
}
void del_right()
{
    int data;
    if(left==-1)
    {
        printf("Underflow");
    }
    data=q[right];
    if(left==right)
    {
        left=-1;
        right=-1;
    }
    if(right==0)
    {
        right=max-1;
    }
    else
    {
        right=right-1;
    }
    printf("Enter the data for deletion_right\n");
}
void del_left()
{
    int data;
    if(left==-1)
    {
        printf("Underflow");
    }
    data=q[left];
    if(left==right)
    {
        left=-1;
        right=-1;
    }
    if(left==max-1)
    {
       left=0;
    }
    else
    {
        left=left+1;
    }
    printf("Enter the data for deletion_left\n");
}
void trav()
{
    int l_pos, r_pos;
    l_pos=left;
    r_pos=right;
    if(left==-1)
    {
        printf("\nQueue is empty\n");
    }
    printf("\nQueue elements are:\n");
    if(l_pos<=r_pos)
    while(l_pos<=r_pos)
    {
        printf("%d ", q[l_pos]);
        l_pos++;
    }
    else
    {
        while(l_pos<=max-1)
        {
            printf("%d ", q[l_pos]);
            l_pos++;
        }
        l_pos=0;
        while(l_pos<=r_pos)
        {
            printf("%d ", q[l_pos]);
            l_pos++;
        }
    }
printf("\n");
}