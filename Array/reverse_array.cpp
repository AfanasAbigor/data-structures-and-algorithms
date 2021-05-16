#include<bits/stdc++.h>
using namespace std;

int rev_arr(int A[], int size_arr)
{
    int B[1000], i,j;

    for(i=size_arr-1,j=0; i>=0; i--,j++)
    {
        B[j] = A[i];
    }
    for(i=0; i<size_arr; i++)
    {
        A[i] = B[i];
    }

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;
    rev_arr(arr, 9);

    for(i=0; i<9; i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}
