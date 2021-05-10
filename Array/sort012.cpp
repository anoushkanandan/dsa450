#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int size)
{
    int low=0,m=0,high=size-1,i;
    while(m<=high)
    {
        switch(arr[m])
        {
            case 0:swap(arr[m++],arr[low++]);break;
            case 1:m++;break;
            case 2:swap(arr[m],arr[high--]);break;
        }
    }
}
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
        cout<<arr[i];
    }
    sort012(arr,n);
    cout<<"\nPrinting array elements";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}