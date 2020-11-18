#include <bits/stdc++.h>
using namespace std ;
#define int long long
int32_t main() {
        int n ;
        cin >> n ;
        int x ;
        vector<int> f(1001, 0) ;
        for (int i = 0 ; i < n ; i++) {
                cin >> x ;
                f[x]++ ;
        }
        bool flag = false ;
        for (int i = 0 ; i < 1001 ; i++) {
                if (f[i] != 0 ) {
                        if (f[i] > (n + 1) / 2) {
                                flag = true ;
                                break ;
                        }
                }
        }
        if (flag) cout << "NO" << endl ;
        else cout << "YES" << endl ;
}