// https://codeforces.com/problemset/problem/999/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 
void solve() {
    int n , k , maxx = -99999 ;
    cin >> n >> k ;
    vector<int> v(n) ;
    for (auto &x : v) { 
        cin >> x ;
        maxx = max(x , maxx) ;
    }
    if (maxx <= k) {
        cout << n << endl ;
        return ;
    }
    int i = 0 , j = n - 1 ;
    int ans = 0 ;
    while(1) {
        if (v[i] <= k) {
            i++ ;
            ans++ ;
        }
        if (v[j] <= k) {
            j-- ;
            ans++ ;
        }
        if (v[j] > k and v[i] > k ) {
            break ;
        }
    } 
    cout << ans << endl ;
}

void solve2() 
{
    int n , k , maxx = -99999 ;
    cin >> n >> k ;
    vector<int> v(n) ;
    for (auto &x : v) { 
        cin >> x ;
        maxx = max(x , maxx) ;
    }
    if (maxx <= k) {
        cout << n << endl ;
        return ;
    }
    else {
        int ii , jj ;
        for (int i = 0;  i < n ; i++) {
            if (v[i] > k) {
                ii = i ;
                break ;
            }
        }
        for (int j = n - 1 ; j >= 0; j--) {
            if (v[j] > k) {
                jj = j ;
                break ;
            }
        }
        //cout << ii << " " << jj << endl ;
        cout << n - (jj - (ii - 1) ) << endl;
    }
}
int32_t main() 
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--) {
        solve2() ;
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