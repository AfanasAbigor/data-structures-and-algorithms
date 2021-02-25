#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a = 10;
	int &ref = a;
	
	
	cout<<&ref<<endl;
	cout<<ref<<" "<<++ref<<endl;
	
	return 0;
}