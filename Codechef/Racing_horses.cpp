#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t,n,i,minn;
    cin>>t;
    while(t--){
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
	    minn=a[1]-a[0];
	    for(int i=1;i<n-1;i++){
	        if(minn>(a[i+1]-a[i])){
	            minn=a[i+1]-a[i];
	        }
	    }
        cout<<minn<<"\n";
    }
	return 0;
}
