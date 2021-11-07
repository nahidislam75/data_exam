#include<stdio.h>
int main()
{
    int i=0,n,num;
    printf("How many number you want to enter :");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements :",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter searching number :");
    scanf("%d",&num);
            int first=0,last=n-1,mid;
        mid=(first+last)/2;
    while(first<=last)
    {

        if(a[mid]==num)
        {
            printf("Found");
            return 0;
        }
        else if(a[mid]>num)
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
        mid=(first+last)/2;
    }
    printf("Not Found");
    return 0;
}
