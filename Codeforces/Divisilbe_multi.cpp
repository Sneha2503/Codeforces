
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t = 0 , n = 0 , c = 0;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        while(n > 0)
        {
            if(n % 6 == 0)
                {
                    n = n / 6;
                    c++;
                }
            else
                {
                    n = n * 2;
                    c++;
                }
            if(n == 1)
                break;
        }
        if(n <= 0)
        cout<<"-1";
        else 
        cout<<c;
    }
 
	return 0;
}
