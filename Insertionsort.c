#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
int A[max];
void create();
void display();
void insertion_sort();
void main()
{
    create();
    printf("\nThe Array is:-\n");
    display();
    insertion_sort();
    printf("\nThe Final Array is:-\n");
    display();
    getch();
}
void create()
{
    int m, alength=5;
    printf("Enter the data\n");
    for(m=1; m<=alength; m++)
    {
        scanf("%d", &A[m]);
    }
}
void insertion_sort()
{
    int i, j, alength=5, key;
    for(j=2; j<=alength; j++)
    {
        key=A[j];
        i=j-1;
        while(i>0 && A[i]>key)
        {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
}

void display()
{
    int i, alength=5;
    for(i=1; i<=alength; i++)
    {
        printf("%d ",A[i]);
    }
}