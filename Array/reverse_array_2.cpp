#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = 10;
    int i,j,temp;

    for(i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(i=0,j=len-1; i<j; i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
