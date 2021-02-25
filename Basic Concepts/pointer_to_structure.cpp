#include<bits/stdc++.h>
using namespace std;

struct rectangle{
	
	int length;
	int bredth;
	
};

int main(){
	
	struct rectangle r = {10, 5};
	
	struct rectangle *p = &r;
	
	
	p->length = 20;
	(*p).bredth = 25;
	
	int area = 0.5 * r.bredth * r.length;
	
	cout<<area<<endl;
	
	return 0;
}

