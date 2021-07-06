// https://codeforces.com/problemset/problem/897/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m ;
    cin >> n >> m ;
    string s ;
    cin >> s ;
    while (m--) {
        int l , r ;
        char c1, c2 ;
        cin >> l >> r >> c1 >> c2 ;
        l -= 1 , r -= 1 ;
        for(int i = l ; i <= r ; i++) {
            if (s[i] == c1) {
                s[i] = c2 ;
            }
        } 
    }
    cout << s << endl ;
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