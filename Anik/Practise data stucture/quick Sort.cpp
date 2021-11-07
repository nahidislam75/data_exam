#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high)
{
    int pivot,i,j,temp;
    pivot=arr[high];
    for(i=low-1,j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i=i+1;
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;

        }
    }
    temp=arr[high];
    arr[high]=arr[i+1];
    arr[i+1]=temp;
    return i+1;

}
void quick_sort(int arr[],int low,int high)
{
    if(low>=high)
        return;
    int p;
    p=partition(arr,low,high);
    quick_sort(arr,low,p-1);
    quick_sort(arr,p+1,high);
}
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quick_sort(arr,0,n-1);
    cout<<"Quick sorted array : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
