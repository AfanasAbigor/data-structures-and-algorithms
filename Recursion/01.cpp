#include<bits/stdc++.h>
using namespace std;

myfun(int n)
{
	if(n>0)
	{
		cout<<n<<"\t";
		myfun(n-1);
	}
	
}

myfun2(int y)
{
	if(y>0)
	{
		myfun2(y-1);
		cout<<y<<"\t";	
	}
	
}

int main()
{
	int x = 3;
	
	myfun(x);
	
	cout<<endl;
	
	myfun2(x);
	
	return 0;
}