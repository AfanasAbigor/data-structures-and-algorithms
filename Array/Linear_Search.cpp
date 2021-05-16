#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int arr[100],len,key,i,index=-1;
	cout<<"Length of Array: ";
	cin>>len;
	cout<<"\nKey That will Search: ";
	cin>>key;
	cout<<"\nGive The array: ";
	
	for(i=0; i<len; i++){
		cin>>arr[i];
	}
	
	for(i=0; i<len; i++){
		if(arr[i]==key){
			index = i+1; //+1 for 0 index to represent index 1
			break;
		}
	}
	cout<<endl;
	if(index == -1){
		cout<<"Key Not Found."<<endl;
	}
	else{
		cout<<"Key is in index "<<index<<endl;
	}
	
	
	
	return 0;
}