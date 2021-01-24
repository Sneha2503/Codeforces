#include <iostream>
#include <bits/stdc++.h>
#include <numeric>  
#include <vector>

using namespace std;

int main() {
    
    long int t = 0 , m = 0 , n = 0 , i = 0 , j = 0 , sum1 = 0 , sum2 = 0 , counter = 0 , f1 = 0 , f2 = 0 , temp = 0 , x = 0;
    vector<long int> arr1, arr2;
    
    cin>>t;
    
    while(t--)
    {
        sum1 = 0 , sum2 = 0, counter = 0 , f1 = 0 , f2 = 0 , temp = 0 , x = 0;
        cin>>n>>m;
        
        for(i = 0 ; i < n ; i++)
        {
            cin>>x;
            arr1.push_back(x);
        }    
        
        for(j = 0 ; j < m ; j++)
        {
            cin>>x;
            arr2.push_back(x);
        }    
        
        sum1 = accumulate(arr1.begin() , arr1.end() , 0);
        sum2 = accumulate(arr2.begin() , arr2.end() , 0);
        
        sort(arr1.begin() , arr1.end());
        sort(arr2.begin() , arr2.end() ,  greater<int>());
        
        
        while(sum1 <= sum2)
        {
            temp = arr1[f1];
            arr1[f1] = arr2[f2];
            arr2[f2] = temp;
            
            sum1 = 0 , sum2 = 0;
            
            sum1 = accumulate(arr1.begin() , arr1.end() , 0);
            sum2 = accumulate(arr2.begin() , arr2.end() , 0);
            
            f1++;
            f2++;
            
            if(f1 > n || f2 > m)
            {
                counter = -1;
                break;
            }
            
            counter++;
        }
        
        arr1.clear();
        arr2.clear();
        
        cout<<counter<<"\n";
    }
    
	return 0;
}
