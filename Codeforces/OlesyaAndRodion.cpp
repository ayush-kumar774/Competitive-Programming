//https://codeforces.com/problemset/problem/584/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti  long long int
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int n , t ;
        cin >> n >> t ;
        if (n == 1 and t == 10 ) cout << -1 ;
        else
        {
                if(t < 10)
                {
                        cout << t ;
                        for(int i = 1; i < n ; i++)
                           cout << 0 ;
                }
                else
                {
                        cout << t ;
                        for (int i = 1 ; i < n -1 ; i++)
                         cout << 0 ; //10000000
                }
                
        }
        
        
}