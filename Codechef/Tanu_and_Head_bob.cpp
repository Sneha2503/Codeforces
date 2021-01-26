#include <iostream>
using namespace std;

int main() {
	int t = 0 , n = 0,i = 0,iy=0,y=0;
	cin>>t;
	string s;
	while(t--){
	    iy=0,y=0;
	    cin>>n>>s;
	    for(i=0;i<n;i++){
	        if(s[i] == 'I')
	            {
	                iy = 1;
	                break;
	            }
	        else if(s[i] == 'Y'){
	            y = 1;
	            break;
	        }
	    }
	    if(iy == 1){
	        cout<<"INDIAN"<<"\n";
	    }else if(y == 1){
	        cout<<"NOT INDIAN"<<"\n";
	    }else{
	        cout<<"NOT SURE"<<"\n";
	    }
	}
	return 0;
}
