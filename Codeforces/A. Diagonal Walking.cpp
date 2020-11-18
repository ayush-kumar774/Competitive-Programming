// https://codeforces.com/problemset/problem/954/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    string s , ans = "";
    cin >> s ;
    for (int i = 0 ; i < n ; i++) {
        if (s[i] == 'R' and s[i+1] == 'U') {
            ans += 'D' ;
            i++ ;
        }
        else if (s[i] == 'U' and s[i+1] == 'R') {
            ans += 'D' ;
            i++ ;
        }
        else ans += s[i] ;
    }
    cout << ans.size() << endl ;
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