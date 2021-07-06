// In the name of Aadi Shakti

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n , startIndex, endIndex , sum{0};
    cin >> n >> startIndex >> endIndex ;
    vector<int> v(n) ;
    for(auto &x : v) cin >> x ;
    for(int i = startIndex ; i <= endIndex; i++)
    {
        sum += v[i] ;
    } 
    cout << sum << endl ;
}

int32_t main()
{
    int testcase  = 1 ;
    while(testcase--)
    {
        solve();
    }
    return 0 ;
}