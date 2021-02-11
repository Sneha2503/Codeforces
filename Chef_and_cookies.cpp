#include <iostream>
using namespace std;

int main() {
	int t;
	long long int n,b,a=0;
	cin>>t;
	while(t--){
	    a=0;
	    cin>>n>>b;
	    a = n/b;
	    if( n % b == 0)
	        cout<<(n-a+1)<<"\n";
	    else
	        cout<<(n-a)<<"\n";
	}
	return 0;
}
