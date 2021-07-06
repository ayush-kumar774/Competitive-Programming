// In the name of Aadi Shakti

#include <bits/stdc++.h>
#define int long long
#define fast std::ios_base::sync_with_stdio(false); std::cin.tie(0) ; std::cout.tie(0) ;
using namespace std;
int32_t main()
{
    fast;
    int n ;
    cin >> n ;
    vector <int> v (n) ;
    for(auto &x : v) cin >> x ;
    sort(v.begin(), v.end() ) ;
    cout << v[n-1] << endl ;
    return 0 ;
}