#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int t , n ,x;
	cin>>t;
	long long int i = 0;
	vector<long long int> v;
	while(t--){
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>x;
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    cout<<(v[0]+v[1])<<"\n";
	    v.clear();
	}
	return 0;
}
