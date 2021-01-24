#include <iostream>
#include<bits/stdc++.h> 

using namespace std;

int dist(string str) 
{ 
    set<string> result ; 
  
    for (int i = 0; i <= str.length(); i++) 
    { 
        for (int j = 1; j <= str.length()-i; j++) 
        { 
            result.insert(str.substr(i, j)); 
        } 
    } 
    return result.size(); 
} 

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    int t1 = dist(s1);
    int t2 = dist(s2);
    
    if(t1 == t2){
        cout<<"Companion";
    }else{
        cout<<"Non Companion";
    }
    
    return 0;
}