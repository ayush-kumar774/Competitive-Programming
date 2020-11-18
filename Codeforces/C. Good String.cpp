// https://codeforces.com/problemset/problem/1272/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    string s  , str = "" ;
    cin >> s ;
    set<int> ss ;
    for (auto x : s) {
        ss.insert(x) ;
    }
    //int k = 0 ;
    if (ss.size() == 1) cout << n << endl ;
    else {
        if (s.size() % 2 == 0 ) {
            for (int i = 0 ; i < n ;) {
                if (i == n - 1) break ;
                if (s[i] != s[i + 1] ) {
                    str += s[i] ;
                    str += s[i+1];
                    i += 2 ;
                }
                else i++ ;
            }
        }
        else {
            for (int i = 0 ; i < n ;) {
                if (i == n - 1 ) break ;
                if (s[i] != s[i + 1] ) {
                    str += s[i] ;
                    str += s[i+1];
                    i += 2 ;
                }
                else i++ ;
            }
        }
        if (str.size() % 2 != 0) {
            str.pop_back();        
        }
        // cout << s.size() << endl ;
        // cout << str.size() << endl ;
        cout << s.size() - str.size() << endl ;
        cout << str << endl ; 
    }
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