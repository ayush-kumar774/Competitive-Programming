#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n ;
    cin >> n ;
    int minA = 999999999999999999 ;
    int minB = 999999999999999999 ;
    vector<int> a(n) , b(n) ;
    for (auto &x : a) {
        cin >> x ;
        if (x < minA) {
            minA = x ;
        }
    }
    for (auto &x : b) {
        cin >> x ;
        if (x < minB) {
            minB = x ;
        }
    }
    int ans = 0 ;
    for(int i = 0 ; i < n ; i++) {
        if (a[i] > minA && b[i] > minB) {
            int aa = a[i] - minA ;
            int bb = b[i] - minB ;
            if (aa > bb) {
                ans += aa ;
            }
            else {
                ans += bb ;
            }
        } 
        else if (a[i] > minA && b[i] == minB) {
            int aa = a[i] - minA ;
            ans += aa ;
        }
        else if (a[i] == minA && b[i] > minB) {
            int bb = b[i] - minB ;
            ans += bb ;
        }
    }
    cout << ans << endl ;
}

int32_t main() 
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
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