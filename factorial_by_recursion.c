#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int m,x;
    printf("enter the value of m \n");
    scanf("%d",&m);
    x=fact(m);
    printf("%d",x);
    getch();
}
int fact(n)
{
    if(n==0)
    {
        return(1);
    }
    return(n*fact(n-1));
}