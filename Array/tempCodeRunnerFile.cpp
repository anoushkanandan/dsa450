
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