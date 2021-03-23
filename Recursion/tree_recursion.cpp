#include<bits/stdc++.h>
using namespace std;

void tree_recursion(int x)
{
	
	if (x>0)
	{
		cout<<x<<"\t";
		tree_recursion(x-1);
		tree_recursion(x-1);
	}
	
}

int main()
{
	int n;
	cin>>n;
	
	tree_recursion(n);
	
	
	return 0;
}