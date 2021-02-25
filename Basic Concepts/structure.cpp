#include<bits/stdc++.h>

using namespace std;

struct view {
	
	int a, b;
	
};


int main()
{
	
	struct view var, sar;
	
	var.a = 10;
	var.b = 20;
	int new_var = var.a + var.b;
	
	sar.a = 10;
	sar.b = 20;
	int new_sar = sar.a * sar.b ;
	
	int result = new_var + new_sar;
	
	cout<<result<<endl;
	
	return 0;
}