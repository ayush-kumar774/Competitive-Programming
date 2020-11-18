// https://codeforces.com/problemset/problem/1323/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , index = 0 ;
    cin >> n ;
    vector<int> v (n) ;
    for(int i = 0 ; i < n ; i++) {
        cin >> v[i] ;
        if (v[i] % 2 == 0) {
            index = i + 1 ; 
        }
    }
    if (index) cout << 1 << endl << index << endl ;
    else if (n == 1 and index == 0 ) cout << -1 << endl ; 
    else
    {
        cout << 2 << endl ;
        int pos1 = 0 ;
        for(int i = 0 ; i < n ; i++) {
            if (v[i] % 2 != 0 and v[i+1] % 2 != 0) {
                pos1 = i ;
                break ;
            }
        }
        cout << pos1 + 1 << " " << pos1 + 2 << endl ;
    }
    
}

int32_t main()
{
    fast;
    int testcases ;
    cin >> testcases ;
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