#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
      int max=2*x;
       int min=2*y;
      int res=abs(max-min)+1;
        cout<<res<<"\n";
    }
	return 0;
}