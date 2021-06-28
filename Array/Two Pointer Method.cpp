#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,x;
    cout<<"Enter Value of X & Array Size: ";
    cin>>x>>n;
    int arr[n];

    for(int l=0; l<n; l++)
    {
        cin>>arr[l];
    }

    // Applying Two Pointer Technique

    sort(arr,arr+1);

    int i=0, j=n-1;

    while(i<j)
    {

        if(arr[i]+arr[j] == x)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            break;
        }

        else if(arr[i]+arr[j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }



    return 0;
}
