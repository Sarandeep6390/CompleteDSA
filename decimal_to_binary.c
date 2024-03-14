#include<stdio.h>
#include<conio.h>
void main()
{
    int stack[100],rem,dec,top=-1;
    printf("enter the value of decimal no");
    scanf("%d",&dec);
    while(dec!=0)
    {
      rem=dec%2;
      top=top+1;
      stack[top]=rem;
      dec=dec/2;
    }
    printf("The equivalent binary no is");
    while(top>=0)
    {
        printf("%d",stack[top]);
        top=top-1;
    }
    getch();
}