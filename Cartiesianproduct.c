#include<stdio.h>
#include<conio.h>
void main()
{
int i, j,n,m,a[10],b[10];

printf("input the number of element in the first set ");
scanf("%d",&n);
printf("input element in the 1st set");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("input the no of element in the second set");

scanf("%d",&m);
printf("input the element in the second set");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
printf("cartiesan product of set is:\n");
printf("{");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf(" (%d,%d),",a[i],b[j]);


}


}
printf("}");

getch();


}