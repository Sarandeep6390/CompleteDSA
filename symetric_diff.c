#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,a[10],b[10],c[20],d[10],k=0,flag=0,A[10],B[10],I=0,J=0;
    int n1,n2;
    printf("input  the number of element inn the 1st set\n");
    scanf("%d",&n1);
    printf("input the values inn the first set");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("input  the number of element in the 2nd set\n");
    scanf("%d",&n2);
    printf("input the value in the second set:\n");
    for(j=0;j<n2;j++)
    {

        scanf("%d",&b[j]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {

            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            d[k]=a[i];
            k++;

        }

    }
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            d[k]=b[i];
            k++;
        }

    }
    for(i=0;i<k;i++)
    {
        printf("symmetric %d ",d[i]);
    }
getch();
}