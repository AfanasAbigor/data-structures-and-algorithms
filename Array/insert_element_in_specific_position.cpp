#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100];
	int length,i,x,pos;
	cin>>length;
	
	for(i=0; i<length; i++){
		cin>>arr[i];
	}

	
	cout<<"\n\nEnter Number & Position: ";
	cin>>x>>pos;
	pos = pos - 1; // index 0 means 1

	/* for(i=length; i>pos; i--){
		
		arr[i] = arr[i - 1];
	} */
	
	for(i=length; i>=pos; i--){
		
		arr[i+1] = arr[i];
	}
	
	arr[pos] = x;
	length ++;
	
	for(i=0; i<length; i++){
		cout<<arr[i]<<"\t";
	}
	
	
	return 0;
	
}