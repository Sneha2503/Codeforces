#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
      long long int b=0,i,a,n,k;
	cin>>a>>n>>k;
	long long int arr[k];
      memset(arr, 0, sizeof(arr));
      while(b!=a){
	    arr[0] = arr[0] + 1;
	    i=0;
	    while(arr[i]>n){
	          arr[i] = 0;
	          if(i < k-1){
	            arr[i+1] = arr[i+1] + 1;
	          }
	          i++;
	    }
	    b++;
	}
	for(long long int i = 0;i<k;i++){
	      cout<<arr[i]<<" ";
	}
	return 0;
}