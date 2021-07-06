
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
    
    int arr[n] ;
    for(auto &x : arr) cin >> x ;

    vector<int> ans ;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > 0) ans.push_back(arr[i]) ;//cout << arr[i] << " ";
    }
    if(ans.size())
    {
        cout << ans.size() << endl ;
        for(auto x : ans) cout << x << " " ;
        cout << endl ;
    }
    else cout << "NO" << endl ;
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
