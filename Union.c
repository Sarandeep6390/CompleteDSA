#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[10],i,j,k=0,l=0,n,m;
printf("input the value of n,m");
scanf("%d%d",&n,&m);
printf("input the element in the 1st array");
   for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
printf("input the element in the 2st array");
   for(i=0;i<m;i++)
{
scanf("%d",&b[i]);

}
for(i=0;i<n;i++)
{
c[k]=a[i];
k++;

}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(b[i]==a[j])
{
b[i]=NULL;

}

}

}
for(i=0;i<m;i++)
{
if(b[i]!=NULL)
{
c[k+l]=b[i];
l++;
}
}
for(i=0;i<k+l;i++)
{
printf("%d ",c[i]);
}
getch();
}