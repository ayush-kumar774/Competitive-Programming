// https://codeforces.com/problemset/problem/32/A

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0); cout.tie(0) ;
#define endl '\n'
 
void solve()
{
    int n , d , counter = 0 ;
    cin >> n >> d ;
    vector<int> v(n) ;
    for(auto &x : v) cin >> x ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            if ( abs(v[i] - v[j]) <= d ) {
                //cout << v[i] << " " << v[j] << endl ;
                counter++ ;
            }
        }
    }
    cout << counter * 2 << endl ;
}

int32_t main()
{
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}

/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/