#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
void solve() {
        int n , x , y;
        cin >> n >> x >> y ;
        int diff = abs(x - y) ;
        for (int i = 1 ; i <= diff ; i++) {
                if (diff % i ) continue ;
                if (diff / i + 1 > n) continue ;
                int k = min( (y - 1) / i , n - 1 ) ;
                int a = y - k * i ;
                for (int j = 0 ; j < n ; j++) {
                        cout << (a + j * i) << " " ;
                }
                cout << endl ;
                break ;
        }
}
int32_t main() {
    fast;
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}