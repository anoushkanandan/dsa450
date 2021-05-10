#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cout<<"\nEnter size of array";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nPrinting array elements";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    int pivot=0;
    int j;
    i=-1;
    for(j=0;j<n;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

     cout<<"\nPrinting array elements";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}