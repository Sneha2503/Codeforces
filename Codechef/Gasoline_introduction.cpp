#include <iostream>
using namespace std;

int main() {
	int t,n,sum=0,c = 0,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    sum=0,c=0;
	    int a[n];
	    for(int i = 0 ; i < n ; i++){
	        cin>>a[i];
	    }
	    sum = a[0];
	    i=1,c=0;
	    while(sum != 0 && i < n){
	        sum = sum + a[i];
	        sum--;
	        c++;
	        i++;
	    }
	    c = c+sum;
	    cout<<c<<"\n";
	}
	return 0;
}
