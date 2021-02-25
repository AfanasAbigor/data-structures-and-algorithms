#include<bits/stdc++.h>
using namespace std;

int myfun(int arr[], int n)
{
	
		
		for(int i=0; i<n; i++)
	{
		if(arr[i]%2 == 0)
		{
			cout<<arr[i]<<"\t";
			
		}	
	}		
}

int main()
{
	int even_arr[1000],final[1000],i,size;
	cin>>size;
	
	for(i=0; i<size; i++)
	{
		
		cin>>even_arr[i];
	}
	
	myfun(even_arr, size);
	
	return 0;
}