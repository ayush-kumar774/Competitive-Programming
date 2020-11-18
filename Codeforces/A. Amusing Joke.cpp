// https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string a , b , c ;
    cin >> a >> b >> c ;
    a += b ;
    sort(a.begin(), a.end()) ;    
    sort(c.begin(), c.end()) ;
    if(a == c) cout << "YES" << endl ;
    else cout << "NO" << endl ;    
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    // cin >> testcases ;
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