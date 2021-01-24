#include <iostream>
using namespace std;

int main() {
	int n,h;
	cin>>n;
	for(int i=0;i<n;i++){
	      cin>>h;
	      if(h<=6){
	            cout<<h+6<<"\n";
	      }
	      else{
	            cout<<h-6<<"\n";
	      }
	}
	return 0;
}
