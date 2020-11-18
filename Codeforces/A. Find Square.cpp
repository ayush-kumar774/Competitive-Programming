// https://codeforces.com/problemset/problem/1028/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n , m , last_x = 0 , last_y = 0 , first_x = 0 , first_y = 0;
    cin >> n >> m ;
    char s[n][m] ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cin >> s[i][j] ;
            if (s[i][j] == 'B') {
                last_x = i ;
                last_y = j ;
            }
        }
    }
    bool flag = false ;
    for (int i = 0 ; i < n;  i++) {
        for (int j = 0 ; j < m ; j++) {
            if (s[i][j] == 'B') {
                first_x = i ;
                first_y = j ;
                flag = true ;
                break ;
            }
        }
        if (flag) break ;
    }
    // cout << "1 found at " << first_x << " " << first_y << endl ;
    // cout << "2 found at " << last_x << " " << last_y << endl ;
    cout << (first_x + last_x + 2) / 2 << " " << (first_y + last_y +2) / 2 << endl ;
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