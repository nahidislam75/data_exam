#include<stdio.h>
int main()
{
    int n,i,S;
    printf("How many number you want to enter :");
    scanf("%d",&n);
    int A[n];
    printf("Enter %d elements :",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter searching number :");
    scanf("%d",&S);
    for(i=0; i<n; i++)
    {
        if(A[i]==S)
        {
            printf("FOUND\n");
            return 0;
        }
    }
    printf("NOT FOUND\n");
    return 0;
}
