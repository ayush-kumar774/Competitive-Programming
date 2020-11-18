#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

int pairs_count(vector<int> v, int n , int sum ) {
    int i = 0 , j = n - 1 , counter = 0 ;
    while (i < j)
    {
        int x = v[i] + v[j] ;
        if (x == sum) {
            counter++ , i++ , j-- ;
        }
        else if (x < sum) i++ ;
        else if (x > sum) j-- ;
    }
    return counter ;
}

void solve() {
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    vector<int> freq(101, 0) ;
    for(auto &x : v) cin >> x ;
    sort(v.begin() , v.end() ) ;
    for (int i = 0 ; i < 101 ; i++) {
        freq[i] = pairs_count(v , n , i) ;
    }
    int ans = *max_element(freq.begin(), freq.end()) ;
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