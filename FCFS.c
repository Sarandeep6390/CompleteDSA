#include<stdio.h>
#include<conio.h>
#define max 30
void main()
{
    int i,j,n,bt[max],wt[max],tat[max];
    float awt=0, atat=0;
    printf("Enter the number of process: ");
    scanf("%d", &n);
    printf("Enter the burst time of the process:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &bt[i]);
    }
    printf("Process\t Burst time\t Waiting Time\t Turnaround Time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\n\t %d\t\t\t%d\t\t%d\n ",i+1,bt[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("Average Waiting Time=%.2f\n", awt);
    printf("Average Turnaround Time=%.2f\n", atat);
    getch();
}