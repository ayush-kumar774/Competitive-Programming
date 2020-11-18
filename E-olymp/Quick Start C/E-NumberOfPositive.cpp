
// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl "\n"

void solve()
{
    int n , cnt = 0 ;
    cin >> n ;
    vector<int> v(n) ;
    for(auto &x :v ) cin >> x ;
    for(int i = 0 ; i < n ; i++)
    {
        if(v[i] > 0) cnt++ ;
    }
    cout << cnt << endl ;
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
