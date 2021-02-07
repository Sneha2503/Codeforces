#include <iostream>
#include <string.h>
using namespace std;

int main() {
	long long int t;
	string s,str;
	cin>>t;
	while(t--){
	      long long int a,b,flag = 0;
	      cin>>s;
	      long long int l = s.length();
	      for(long long int i=1; i<l-1; i++) {
			if((s[i-1]=='0'&&s[i]=='1'&&s[i+1]=='0')||(s[i-1]=='1'&&s[i]=='0'&&s[i+1]=='1')) {
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"Good\n";
		else
			cout<<"Bad\n";
	}
	return 0;
}