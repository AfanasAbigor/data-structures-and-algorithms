#include<bits/stdc++.h>
using namespace std;

void swap(int &x, int &y)
{
	int temp;
	
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 20, b = 30;
	
	swap(a, b);
	cout<<"A:"<<a<<endl;
	cout<<"B:"<<b<<endl;
	            
	return 0;
}