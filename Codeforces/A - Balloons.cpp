// https://codeforces.com/problemset/problem/998/A
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
    int n ;
    cin >> n ;
    if ( n == 1 ) cout << - 1 << endl ;
    else if ( n == 2 ) {
        set<int> s ;
        int max =  0 ;
        while(n--) {
            int x ;
            cin >> x ;
            if(max < x) max = x ; 
            s.insert(x);
        }
        if(s.size() == 1) cout << -1 << endl ; 
        else cout << 1 << endl << 1 << endl ; 
    }
    else {
        vector<int> v (n) ;
        int sum = 0 ;
        for(auto &x : v) cin >> x ;
        for(int i = 1 ; i < n ; i++) 
        {
            sum += v[i] ;
        }
        if(sum != v[0]) {
            cout << n - 1 << endl; 
            for(int i = 2 ; i <= n ; i++) cout << i << " ";
            cout << endl ; 
        }
        else {
            cout << n - 2 << endl ;
            for(int i = 3; i <= n ; i++) cout << i << " "; 
            cout << endl ;
        }
    }

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
