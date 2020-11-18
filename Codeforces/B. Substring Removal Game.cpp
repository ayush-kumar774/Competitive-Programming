// https://codeforces.com/problemset/problem/1398/B
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string s ;
    cin >> s ;
    vector<int> v ;
    for(int i = 0 ; i < s.size() ; i++) {
        if (s[i] == '1' ) {
            int j = i ;
            while (j + 1 < s.size() and s[j + 1] == '1') {
                j++ ;
            }
            v.push_back( j - i + 1 ) ;
            i = j ;
        }
    }
    sort( v.rbegin() , v.rend() ) ;
    int ans = 0 ;
    for (int i = 0 ; i < v.size() ; i += 2) ans += v[i] ;
    cout << ans << endl ;
}

int32_t main()
{
    fast;
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