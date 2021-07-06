// https://codeforces.com/contest/910/problem/A
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl '\n'

void solve() {
    int n , d ;
    cin >> n >> d ;
    int ans = 0 ;
    string s ;
    cin >> s ;
    for (int i = 0 ; i < n ;) {
        int last = -1 ;
        for (int j = i + 1 ; j < n && j <= i + d ; j++ ) {
            if (s[j] == '1') {
                last = j ;
            }
        }
        if (last == -1) {
            cout << -1 << endl ;
            return ;
        }
        i = last ;
        ans ++ ;
        if (i == n - 1 ) break ;
    }
    cout << ans << endl ;
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
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/