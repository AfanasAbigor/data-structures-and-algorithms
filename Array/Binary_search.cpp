#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int size_of_array, int key)
{

	int low = 0;
	int high = size_of_array - 1;

	while(low<=high)
	{

		int mid = (low + high)/2;

		if(key == arr[mid])
		{
			return mid;
		}
		else if(key < arr[mid])
		{
			high = mid - 1;
		}
		else if(key > arr[mid])
		{
			low = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int arr[100],i,key,length;

	cout<<"Enter Array Length and the Key: ";
	cin>>length>>key;

	cout<<"Enter The List: ";
	for(i=0; i<length; i++)
	{
		cin>>arr[i];
	}

	sort(arr, arr+length); // list have to be sorted

	int index = binary_search(arr,length, key);

	if(index < 0)
	{
		cout<<"Key Not Found"<<endl;
	}
	else
	{
		cout<<"Key is in "<<index<<" Index"<<endl;
	}


	return 0;
}