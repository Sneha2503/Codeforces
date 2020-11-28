#include <iostream>

using namespace std;

int main()
{
    int n = 0 , m = 0 , count = 0, x = 1, i = 0;
    cin>>n>>m;
    for(i = x ; i < x+count+n ; i++)
    {
        if(i % m == 0)
            count++;
    }
    cout<<(count+n);
}
