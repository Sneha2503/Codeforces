#include <iostream>
#include<cmath>
using namespace std;

int main() {
	long long int t;
	int n,k,i,x,slow=0,sum=0,bot=1;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    slow=0,sum=0,bot=1;
	    for(i=0;i<n;i++){
	        cin>>x;
	        if(x > k)
	            slow = 1;
	        if(x > 1)
	            bot = 0;
	        if(x != -1)
	            sum++;
	    }
	    
	   if(sum < ceil((double)n/2))
	        cout<<"Rejected"<<"\n";
	   else if(slow)
	        cout<<"Too Slow"<<"\n";
	   else if(bot && sum == n)
	        cout<<"Bot"<<"\n";
	   else
	        cout<<"Accepted"<<"\n";
	        
	}
	return 0;
}
