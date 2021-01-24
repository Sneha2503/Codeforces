
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,r;
    int i = 0 , l = 0 , c = 0;
    cin>>s;
    l = s.length();
    for(i = 0 ; i < l ; i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i = i + 2 ;
            continue;
        }
        else
        {
            if(c == 0)
                c = 1;
                else
            {
                if(i>2)
                    {
                        if(s[i-3] == 'W' && s[i-2] == 'U' && s[i-1] == 'B')
                            r = r + " ";
                    }
            }
            r = r + s[i];
        }
    }
    
    cout<<r;
}
