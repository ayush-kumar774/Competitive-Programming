// https://www.hackerrank.com/challenges/picking-numbers/problem

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n, counter = 0 , res ;
    vector<int> v (n) ;
    for(auto &x : v) cin >> x ;
    sort( v.begin(), v.end() ) ;
    // for(int i = 0 ; i < n ; i++)
    // {
    //     if(abs(v[i] - v[i+1] ) == 0 or abs(v[i] - v[i+1] ) == 1) {
    //         res = i ;
    //         counter++ ;
    //         if(v[res])
    //     }
    // }
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/
