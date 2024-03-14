#include<stdio.h>
int main()
{
  int m,n;
  scanf("%d%d",&m,&n);
  if(m>0 && n>0)
  {
  if(m%n==0)
    printf("1");
  else
    printf("0");
  } 
}