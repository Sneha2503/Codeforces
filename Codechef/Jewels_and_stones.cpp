#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
	int t,i,count=0;
	string s,j;
	
	cin>>t;
	
	while(t--){
	    
	    cin>>j>>s;
	    
	    count=0;
	    
	    for(i = 0 ; i < s.length() ; i++){
	        size_t found = j.find(s[i]); 
	        if(found != string::npos)
	            count++;
	    }
	    
	    cout<<count<<"\n";
	}
	return 0;
}
