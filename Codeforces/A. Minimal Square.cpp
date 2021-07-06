// https://codeforces.com/problemset/problem/1360/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int a , b ;
    cin >> a >> b ;
    if ( a == b ) cout << ( 2 * a ) * ( 2 * a ) << endl ;
    else
    {
        cout << min ( ( max(2* b, a) * max ( 2* b , a ) ), ( max(2 * a, b ) *max(2 * a, b ) ) ) << endl ;
    }
    
}

int32_t main()
{
    fast;
    int testcases ;
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