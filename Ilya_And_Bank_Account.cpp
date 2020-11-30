#include <iostream>

using namespace std;

int main()
{
    long long int n = 0 , last_digit = 0 , copy = 0 /*, digits = 0*/, no_first_removed = 0 , no_second_removed = 0;
    cin>>n;
    
    copy = n;

    last_digit = copy % 10;
    
    copy = copy / 10;
    
    no_first_removed = copy;
    
    copy = copy / 10;
    
    copy = copy * 10;
    
    copy = copy + last_digit;
    
    no_second_removed = copy;
    
    if(no_first_removed > n && no_first_removed > no_second_removed)
    cout<<no_first_removed;
    else if(no_second_removed > n && no_second_removed > no_first_removed)
    cout<<no_second_removed;
    else if(no_first_removed == no_second_removed && no_first_removed > n && no_second_removed > n)
    cout<<no_first_removed;
    else
    cout<<n;
}
