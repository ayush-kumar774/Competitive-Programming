// https://codeforces.com/problemset/problem/976/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    int counter = count (s.begin() , s.end() ,'0') ;
    if(n == 1) cout << s << endl ;
    else {
        cout << 1 ;
        for (int i = 0 ; i < counter ; i++) cout << 0 ;
        cout << endl ;
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