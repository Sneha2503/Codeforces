
#include <iostream>

using namespace std;

int main()
{
  long int n = 0 , result = 1 , i = 0 , t = 0 , e = 0;
  cin>>t;
  for(i = 0 ; i < t ; i++)
  {
      result = 1;
      cin>>n;
      
      while(n != 0)
      {
          cin>>e;
          result = result * e;
          n--;
      }
        cout<<result;
        cout<<"\n";
  }
  
}
