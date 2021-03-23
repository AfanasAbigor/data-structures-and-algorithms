#include<bits/stdc++.h>
using namespace std;

void fun2(int n);

void fun1(int n)
{
	if(n>0)
	{
		cout<<n<<"\t";
		fun2(n-1);	
	}
}

void fun2(int n)
{
	if(n>1){
		cout<<n<<"\t";
		fun1(n/2);
	}
}

int main()
{
	int x;
	cin>>x;
	
	fun1(x);
	
	return 0;
}