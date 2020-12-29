
#include <iostream>
#include<algorithm>
#include <list>
using namespace std;
int main() {
   long long int arr[4],i=0,diff=0;
    for(i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    std::list<long long int> mylist (arr,arr+4);
    mylist.unique(); 
    diff = 4-mylist.size();
    cout<<diff;
    return 0;
}