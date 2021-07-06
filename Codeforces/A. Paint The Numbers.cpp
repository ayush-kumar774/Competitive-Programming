// https://codeforces.com/problemset/problem/1209/A
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl '\n'

void solve() {
    vector<int> freq(101, -1) ;
    int n , flag = 0 ; 
    cin >> n ;
    vector <int> v (n) ;
    for (auto &x : v) {
        cin >> x ;
        if (x == 1) flag = 1; 
        freq[x] = 0 ;
    }
    for (int i = 0 ; i < n ; i++) {
        for (int j = 2 ; j < 101 ; j++) {
            if (v[i] % j == 0 and freq[j] >= 0 ) {
                freq[j] = 2 ;
                //cout << v[i] << " " << j << endl ;
                break ;
            }
        }
    }
    if (flag) cout << 1 << endl ;
    else {
        int ans = 0 ;
        for (int i = 2 ; i < 101 ; i++) {
            if (freq[i] > 0) ans++ ;
        }
        cout << ans << endl ;
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