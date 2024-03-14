#include <stdio.h>
#include<conio.h>
void main()
{
int a[10], b[10],  n1, n2, i, j;
printf("Enter array1 size : ");
scanf("%d",&n1);
printf("\nEnter array2 size : ");
scanf("%d",&n2);
printf("\nEnter array1 element : ");
for(i = 0;i < n1;i++)
scanf("%d",&a[i]);
printf("\nEnter array2 element : ");
for(j = 0;j < n2;j++)
scanf("%d",&b[j]);
for(i = 0;i < n1;i++)
{
for(j = 0;j< n2;j++)
{
if(a[i]==b[j])
{
a[i]=NULL;
}
}
}
for(i = 0;i < n1;i++)
if(a[i]!=NULL)
printf("%d ",a[i]);

getch();
}