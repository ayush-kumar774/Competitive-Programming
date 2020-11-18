// https://codeforces.com/contest/1005/problem/B
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

bool compare(string &s1,string &s2) 
{ 
    return s1.size() < s2.size(); 
} 

void solve() {
    string s, t ;
    cin >> s >> t ;
    int n = s.size() ;
    int m = t.size() ;
    int si = -1 , ti = -1 ;
    if ( n < m ) {
        for (int i = n - 1 , j = m - 1 ; i >= 0; i--, j--) {
            if(s[i] != t[j]) {
                si = i ;
                ti = j ;
            }
        }

        if (si == ti) {
            cout << ( m - (si + 1) ) << endl ;
        }
    }
    else if (n > m) {
        for (int i = m - 1, j = n - 1 ; i >= 0; i--, j--) {
            if(t[i] != s[j]) {
                ti = i ;
                si = j ;
            }
        }
        cout << (si + ti + 2);
    }
    
}

int32_t main() 
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0  ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/