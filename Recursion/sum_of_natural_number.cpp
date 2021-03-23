#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{

	if (n==1 || n == 0)
	{
		return n;
	}
	else
	{

		return sum(n-1) + n;

	}

}


int main()
{

	int num;
	cin>>num;
	cout<<sum(num)<<endl;
	return 0;

}