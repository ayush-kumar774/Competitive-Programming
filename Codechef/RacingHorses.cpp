//https://www.codechef.com/problems/HORSES
#include<bits/stdc++.h>
using namespace std;
#define aakriti int
aakriti main()
{
        aakriti t;
        cin >> t ;
        while (t--)
        {
             aakriti n ;
             cin >> n ;
             vector<aakriti>v(n);
             for(auto &x : v) cin >> x ;
             sort(v.begin(), v.end());
           //  for(auto x : v ) cout << x << " ";
             aakriti mini = v[1] - v[0];
             for(aakriti i = 1 ; i < n-1 ; i++)
             {
                     if(v[i + 1] - v[i] < mini)
                     {
                             mini = v[i + 1] - v[i] ;
                     }
             }
             cout << mini << endl ;
        }
        
}