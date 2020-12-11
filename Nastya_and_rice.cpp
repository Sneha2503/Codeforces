
#include <iostream>

using namespace std;

int main()
{
  int t = 0 , n = 0 , a = 0 , b = 0 , c = 0 , d = 0;
  int nl = 0 , nu = 0 , tl = 0 , tu = 0 ;
  cin>>t;
  
  while(t--)
  {   
      cin>>n>>a>>b>>c>>d;
      
      nl = a-b;
      nu = a+b;
      tl = c-d;
      tu = c+d;
      
      if((n*nu >= tl) && (n*nl <= tu))
  	cout<<"Yes\n";
      else
	cout<<"No\n";
  }
}
