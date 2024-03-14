#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 50

int top= -1;
char stack[max];
char POP();
char PUSH(char);
void main()
{
  char str[max];
  int i,n;
  printf("enter the string");
  gets(str);  //scanf("%s",&str);
  n=strlen(str);
  for(i=0;i<n;i++)
  {
    PUSH(str[i]);
  }
  for(i=0;i<n;i++)
  {
    str[i]=POP();
  }
  puts(str);
  getch();
}
char PUSH(char c)
{
    if(top==max-1)
    {
        printf("overflow");
    }
    else
    {
        top=top+1;
        stack[top]=c;
        return stack[top];
    }
}
char POP()
{
    if(top<0)
    {
        printf("stack is underflow");
    }
    else
    {
        return stack[top--];
    }
}