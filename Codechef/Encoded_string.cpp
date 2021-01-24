#include <iostream>
#include<string>
using namespace std;

int main() {
    long long int t = 0 , i = 0 , n = 0 , j = 0 , c = 0 , m = 0 , low = 97 , up = 112 ;
    //97-112
	string s;
	
	cin>>t;
	
	while(t--)
	{
	    
	    cin>>n>>s;
	    
	    for(i = 1 , m = 0 ; i <= n/4 ; i++)
	    {
	        c = 16 , low = 97 , up = 112;
	        
	       for(j = 1 ; j <= 4 ; j++)
	       {
	           c /= 2;
	           
	           if(s[m] == '0')
	              up -= c;
	           else if(s[m] == '1')
	              low += c;
	           
	           m++;
	       }
	       cout<<(char)up;
	    }
	    
	    cout<<"\n";
	}
	
	return 0;
}
