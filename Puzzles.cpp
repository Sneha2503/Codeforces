#include<vector>
#include <iostream>
#include<algorithm> 

using namespace std;
int main()
{
  vector<int> v;
  int n =  0 , i = 0 , s= 0 , m = 0;
  cin>>n;
  cin>>m;
  for(i = 0 ; i < m ; i++)
  {
      cin>>s;
      v.push_back(s);
  }
  sort(v.begin(), v.end());
  cout<<(v.at(n-1)-v.at(0));
}
