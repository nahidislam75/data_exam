#include<iostream>
using namespace std;
int main()
{
    int n,i,j,value,count=0;;
    cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the search number : ";
    cin>>value;
    for(i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            count++;
            j=i+1;
            break;
        }
    }
    if(count!=0)
        cout<<"Value is found "<<j<<"th location"<<endl;
    else
        cout<<"Not Found"<<endl;





}
