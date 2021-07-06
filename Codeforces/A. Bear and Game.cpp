// https://codeforces.com/problemset/problem/673/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for(auto &x : v) cin >> x ;
    if(v[0] > 15) {
        cout << 15 << endl ;
    } 
    else
    {
        int minutes = 0 , flag = 0;
        for(int i = 1 ; i < n ; i++) {
            if(v[i] - v[i - 1] > 15) {
                minutes = v[i - 1] + 15 ;
                flag = 1 ;
                break ;
            }
        }
        if (flag == 1) cout << minutes << endl ;
        else {
            minutes = v[n -1 ] + 15 ;
            if(minutes >= 90 ) cout << 90 << endl ;
            else cout << minutes << endl ;
        }
    }
    
}

int32_t main()
{
    fast;
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