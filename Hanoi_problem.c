#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    char A='A', B='B', C='C';
    void Hanoi (int,char,char,char);
    printf("Enter the number of disk");
    scanf("%d",&n);
    printf("\n\n Tower of Hanoi problem with %d disks \n",n);
    printf("Sequence is:\n");
    Hanoi (n,A,B,C);
    printf("\n");
    getch();
}
void Hanoi(int n,char A,char B,char C)
{
    if(n!=0)
    {
        Hanoi(n-1,A,C,B);
        printf("Move disk %d from %c to %c \n",n,A,C);
        Hanoi(n-1,B,A,C);
    }
}