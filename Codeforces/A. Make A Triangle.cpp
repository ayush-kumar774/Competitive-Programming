// https://codeforces.com/contest/1064/problem/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int a[3] ;
    for (int i = 0 ; i < 3 ; i++) {
        cin >> a[i] ;
    }
    sort(a , a + 3) ;
    if (a[0] + a[1] <= a[2] ) {
        cout << (a[2] - (a[0] + a[1])) + 1 << endl ;
    }
    else cout << 0 << endl ;
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