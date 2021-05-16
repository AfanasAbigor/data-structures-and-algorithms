#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int arr[]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100},pos,i;
	
	cout<<"{10, 20, 30, 40, 50, 60, 70, 80, 90, 100}";
	cout<<"\n\nEnter index that will delete (1 to 10): ";
	cin>>pos;
	
	pos-=1; // input 1 means index 0
	int len = sizeof(arr)/sizeof(arr[0]);
	
	
	for(i=pos; i<len; i++){
		
		arr[i] = arr[i+1];
	
	}

	len--;

	for(i=0; i<len; i++){
		cout<<arr[i]<<"\t";
	}

	
	return 0;
}