// In the name of Aadi Shakti


// Run Time Error at 4th testcase 
#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n , q ;
    cin >> n >> q ;
    vector <int> v (n) ;
    for(auto &x : v) cin >> x ;
    while(q--)
    {
        int l, r, x, flag = 0 ;
        cin >> l >> r >> x ;
        l-- ; r-- ;
        for(int i = l; i <= r ; i++ )
        {
            if(v[i] == x ) {
                flag = 1 ;
                break ;
            }
        } 
        if(flag) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
}

int32_t main()
{
    fast;
    int testcase  = 1 ;
   // cin >> testcase ;
    while(testcase--)
    {
        solve();
    }
    return 0 ;
}