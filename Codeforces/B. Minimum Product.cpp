#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
        int a , b , x , y , n ;
        cin >> a >> b >> x >> y >> n ;
        int res1 = 1 , res2 = 1 ;
        int bcan = min(b - y, n) ;
        int acan = min((n - bcan) , (a - x) ) ;
        res1 = ( a - (acan ) ) * (b - bcan) ;
        int acan1 = min(a - x, n) ;
        int bcan1 = min((n - acan1), (b - y) ) ;
        res2 = ( a - (acan1 ) ) * (b - bcan1) ;
        // cout << res1 << " " << res2 << endl ;
        cout << min(res1, res2) << endl;
}

int32_t main () {
        fast;
        int testcases = 1 ;
        cin >> testcases ;
        while(testcases--) {
                solve() ;        
        }
        return 0 ;
}