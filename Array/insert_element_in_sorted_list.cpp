#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],i,n,value;
    cout<<"Enter Array Size: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"Enter Value: ";
    cin>>value;
    cout<<endl;

    i = n - 1; // i is (length-1)
    while(arr[i]>value)
    {
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = value;
    n++;

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
