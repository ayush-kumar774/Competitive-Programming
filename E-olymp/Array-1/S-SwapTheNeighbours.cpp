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
    int arr[n] = {0} ;
    for (auto &x : arr) cin >> x ;
    if (n & 1)
    {
        for(int i = 0 ; i < n - 1 ; i += 2)
        {
            swap(arr[i], arr[i+1]) ;
        }
        for(auto x : arr) cout << x << " " ;
        cout << endl ;
    }
    else {
        for(int i = 0 ; i < n  ; i += 2)
        {
            swap(arr[i], arr[i+1]) ;
        }
        for(auto x : arr) cout << x << " " ;
        cout << endl ;
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
