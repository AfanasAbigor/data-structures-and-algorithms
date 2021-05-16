#include<bits/stdc++.h>
using namespace std;

void merge_array(int a[], int b[], int n, int m, int c[])
{
    int i=0,j=0,k=0;

    while(i<n && j<m)
    {
        if (a[i]>b[j])
        {
            c[k] = b[j];
            k++;
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
            i++;
        }
    }
    // for remaining elements
    while(i<n)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while(j<m)
    {
        c[k] = b[j];
        k++;
        j++;
    }
}



int main()
{
    int arr1[] = {1,3,5,7,9};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {0,2,4,6,8};
    int m = sizeof(arr2)/sizeof(arr2[0]);

    int s = n+m;
    int arr3[s];

    merge_array(arr1,arr2,n,m,arr3);

    for(int i=0; i<s; i++)
    {
        cout<<arr3[i]<<" ";
    }

    return 0;
}
