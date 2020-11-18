#include<vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
  vector<int> v;
  int n =  0 , i = 0 , s= 0;
  cin>>n;
  for(i = 0 ; i < n ; i++)
  {
      cin>>s;
      v.push_back(s);
  }
  sort(v.begin(), v.end());
  for (int x : v)
        cout << x << " ";
}
