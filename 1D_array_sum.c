#include<stdio.h>
#include<conio.h>
int main()
{
    int A[50], n, i, sum=0;
    printf("Enter the number of elements in an array ");
    scanf("%d", &n);
    printf("Enter the elements in an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", A[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    printf("\nSum=%d ", sum);
    getch();
}