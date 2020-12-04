
#include <iostream>
#include <string>

using namespace std;
typedef long long ll;
char l[26];
 
int main()
{
    int t;
    cin>>t;
    while(t--) {
    	int n, a, b;
    	cin>>n>>a>>b;
    	for(int i = 0; i < b; i++) {
    		l[i] = i + 'a';	
		}
		
		int j = 0;
		for(int i = 0; i < n; i++) {
			cout<<l[j];
			j = (j + 1) % b;
		}
		
		cout<<"\n";
	}
 
	return 0;
}
