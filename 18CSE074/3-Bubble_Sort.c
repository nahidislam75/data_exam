#include<stdio.h>
int main()
{
    int n,i,j,S;
    printf("How many number you want to sort :");
    scanf("%d",&n);
    int A[n];
    printf("Enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[j]>A[j+1])
            {
               S=A[j];
               A[j]=A[j+1];
               A[j+1]=S;
            }
        }
    }
    printf("The sorted array is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
