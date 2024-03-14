#include<stdio.h>
int block_product(int arr[], int n)
{
    if(n == 4)
    {
        return arr[0]*arr[3] - arr[1]*arr[2];
    }
    else
    {
        int m= n/4;
        int A[m], B[m], C[m], D[m];
        for(int i=0; i < m; i++)
        {
            A[i] = arr[i];
            B[i] = arr[m+i];
            C[i] = arr[2*m+i];
            D[i] = arr[3*m+i];
        }
        return block_product(A, m + 0) * block_product(D, m + 0) - block_product(B, m + 0) * block_product(C, m + 0);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d", block_product(arr,n));
    return 0;
}