#include<bits/stdc++.h>
using namespace std;

double e(int num, int expo){
	
	static int power = 1, fact = 1;
	double result;
	
	if (expo == 0)
		return 1;
	else{
	
		result = e(num, expo - 1);
		power = power * num;
		fact = fact * expo;
		return result + power/fact;	
	}
}
int main(){
	
	int number;
	
	cout<<"Enter The Expo:";
	cin>>number;
	
	double answer = e(number,10);
	
	cout<<answer<<endl;
		
}