#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int arr[100];
	int length,i,x;
	cin>>length;
	
	for(i=0; i<length; i++){
		cin>>arr[i];
	}
	
	
	cout<<"\n\nElement That will Add:";
	cin>>x;
	
	arr[length] = x ;
	length++ ;
	
	for(i=0; i<length; i++){
		cout<<arr[i]<<"\t";
	}
	
	return 0;
}