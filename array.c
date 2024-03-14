#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],n,i,sum=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\n sum=%d",sum);
    getch();
}