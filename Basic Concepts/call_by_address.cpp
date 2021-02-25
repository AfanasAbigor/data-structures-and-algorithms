#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x = 20, y = 30;
	
	swap(&x, &y);
	
	cout<<"X:"<<x<<endl;
	cout<<"Y:"<<y<<endl;
	
	return 0;
}