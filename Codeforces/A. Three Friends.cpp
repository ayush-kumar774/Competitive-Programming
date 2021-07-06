// https://codeforces.com/problemset/problem/1272/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int ans = 0 ;
    vector<int> v(3) ;
    for(auto &x: v) cin >> x ;
    sort(v.begin(), v.end()) ;
    if(v[0] == v[2]) cout << 0 << endl ;
    else
    {
        if (v[0] != v[1] and  v[1] != v[2]) {
            v[0]++ ;
            v[2]-- ;
            ans = abs(v[0] - v[1]) + abs(v[0] - v[2]) + abs(v[1] - v[2]) ;
            cout << ans << endl ;
        }
        else if(v[0] == v[1]) {
            if(v[1] + 1 == v[2]) {
                v[0]++ ;
                v[1]++ ;
                ans = abs(v[0] - v[1]) + abs(v[0] - v[2]) + abs(v[1] - v[2]) ;
                cout << ans << endl ;
            }
            else if (v[1] + 1 != v[2]) {
                v[0]++ ;
                v[1]++ ;
                v[2]-- ;
                ans = abs(v[0] - v[1]) + abs(v[0] - v[2]) + abs(v[1] - v[2]) ;
                cout << ans << endl ;
            }
        }
        else if(v[1] == v[2]) {
            if(v[0] + 1 == v[2]) {
                v[0]++ ;
                ans = abs(v[0] - v[1]) + abs(v[0] - v[2]) + abs(v[1] - v[2]) ;
                cout << ans << endl ;
            }
            else if (v[0] + 1 != v[2]) {
                v[0]++ ;
                v[1]-- ;
                v[2]-- ;
                ans = abs(v[0] - v[1]) + abs(v[0] - v[2]) + abs(v[1] - v[2]) ;
                cout << ans << endl ;
            }
        }
    }
    // max ( abs ( a - c ) + abs ( b - c ) + abs ( a - b ) - 4 , 0 )
}
int32_t main()
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
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