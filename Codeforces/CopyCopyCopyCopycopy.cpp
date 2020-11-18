//https://codeforces.com/contest/1325/problem/B

#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m ;
    cin >> n ;
    m = n ;
    unordered_set<int> s ;
    while(m--)
    {
        int x ;
        cin >> x ;
        s.insert(x) ;
    }
    //for(auto x : s) cout << x << " " ;
    //cout << endl ;
    if(s.size() <= n) {
        cout << s.size() << endl ;
    }
    else
    {
        cout << n << endl ;
    }
    
}

int32_t main()
{
    fast;
    int testcases ;
    cin >> testcases ;
    while (testcases--)
    {
        solve() ;
    }
    return 0 ;
}