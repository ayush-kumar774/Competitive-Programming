// In the name of Aadi Shakti

// TLE
// https://toph.co/p/making-football-teams

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n ;
    cin >> n ;
    vector<int> v(n);
    for(auto &x : v) cin >> x ;
    sort(v.begin(), v.end() ) ;
    int queries{0} ;
    cin >> queries ;
    while(queries--)
    {
        int x , k ;
        cin >> x >> k ;
        int cnt{0} ;
        while(k > 0)
        {
            for(int i = n -1 ; i >= 0; i--)
            {
                if(v[i] + k >= x) {
                    cnt++;
                    k -= x -v[i] ;
                }
            }
        }
        cout << cnt << endl; 
    }
}

int32_t main()
{
    fast;
    int testcase  = 1 ;
    while(testcase--)
    {
        solve();
    }
    return 0 ;
}