#include<stdio.h>
int main()
{
  int n,i,j,a,up=0,lp=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      scanf("%d",&a);
      if(i>j)
      {
        if(a!=0)
          up=1;
      }
      else if(i<j)
      {
        if(a!=0)
          lp=1;
      }
    }
  }
  if(up==0 || lp==0)
    printf("1");
  else
    printf("0");
  return 0;
}