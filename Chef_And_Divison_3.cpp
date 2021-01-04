#include <iostream>
using namespace std;

int main() {
	long int t = 0 , n = 0 , k = 0 , d = 0 , i = 0 , total = 0 , p = 0;
	long int a[1000];
	cin>>t;
	while(t--)
	{
	    total = 0 , p = 0;
	    cin>>n>>k>>d;
	    for(i = 1 ; i <= n ; i++)
	    {
	        cin>>a[i];
	        total += a[i];
	    }
	    p = total / k;
	    
	    if(p > d)
	    cout<<d<<"\n";
	    else
	    cout<<p<<"\n";
	}
	return 0;
}
