// https://codeforces.com/problemset/problem/978/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 
int arr[1001] = {0} ;
void solve() {
    int n ;
    cin >> n ;
    vector<int> ans , v(n) ;
    for (int i = 0 ; i < n ; i++) {
        cin >> v[i] ;
    }
    for (int i = n - 1 ; i >= 0 ; i--)
    {
        int x = v[i] ;
        if(arr[x] == 0) {
            ans.push_back(x) ;
        }
        arr[x]++ ;
    }
    reverse(ans.begin() , ans.end() ) ;
    cout << ans.size() << endl ;
    for(auto x : ans) cout << x << " ";
    cout << endl ;
    for(int i = 0 ; i < 1001 ; i++ ) arr[i] = 0 ;
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