#include <iostream>
#include<cmath>

using namespace std;

int main() {
	int a , b , o_diff = 0 ;
	
	cin>>a>>b;
	
	o_diff = abs(a - b);
	
	if(o_diff % 10 < 8){
	    o_diff++;
	}else{
	    o_diff--;
	}
	cout<<o_diff;
	return 0;
}
