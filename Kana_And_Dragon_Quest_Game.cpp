#include <iostream>

using namespace std;

int main()
{
  int t = 0 , x = 0 , m = 0 , n = 0 , c = 0;
  cin>>t;
  
  while(t--)
  {
    cin>> x >> n >> m;
    c=x;
    while(n--)
    {
        x = ((int)x/2) + 10;
    }
    
    while(m--)
    {
        x = x - 10;
    }
    
    if(x <= 0 || c <= 10)
    cout<<"YES";
    else
    cout<<"NO";
    cout<<"\n";
  }
}
