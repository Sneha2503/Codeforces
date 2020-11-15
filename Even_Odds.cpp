
#include <iostream>
#include <string>

using namespace std;
int main()
{
  long long int n = 0 , pos = 0 , odd = 0;
  cin>>n;
  cin>>pos;
  if(n%2 != 0)
  {
      odd = n+1;
      odd = odd/2;
  }
  else
  {
      odd = n/2;
  }
  
  if(pos <= odd)
  {
      cout<<(2*pos-1);
  }
  else
  {
      pos = pos - odd;
      cout<<(2*pos);
  }
}
