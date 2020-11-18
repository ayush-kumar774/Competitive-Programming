#include <bits/stdc++.h>
using namespace std ;
#define int long long
int32_t main() {
    int n , k, s ;
    cin >> n >> k >> s ;
    vector<int> v(n) ;
    int sum = 0 ;
    for(auto &x : v) { cin >> x ; sum += x ; }
    if (sum <= s) {
        cout << -1 << endl ;
    }
    else {
        sort(v.begin() , v.end()) ;
        int sum2 = 0 , counter = 0 ;
        for (int i = n - 1 ; i >= 0 ; i--) {
            counter++ ;
            sum2 += v[i] ;
            if (sum2 > s) {
                break ;
            }
        }
        if (counter <= k) {
            cout << k  + 1 << endl ;
        }
        else {
            cout << counter << endl ;
        }
    }
}