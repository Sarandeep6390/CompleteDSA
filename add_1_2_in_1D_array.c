#include<stdio.h>
#include<conio.h>
int main()
{
    int A[50], n, i;
    printf("Enter the number of elements in an array ");
    scanf("%d", &n);
    printf("Enter the elements in an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i<=5)
        {
            A[i]=A[i]+1;
        }
        else
        {
            A[i]=A[i]+2;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", A[i]);
    }
}