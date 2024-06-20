#include<iostream>
using namespace std;

int minIncrement(int arr[], int n)
{
    sort(arr, arr+n);
    int ans=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]<=arr[i-1])
        {
            ans+=arr[i-1]+1-arr[i];
            arr[i]=arr[i-1]+1;
        }
    }
    return ans;
}

int main()
{
    int arr[]={1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<minIncrement(arr, n);
}