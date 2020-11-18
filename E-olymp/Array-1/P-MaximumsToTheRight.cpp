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
    int arr[n], maxx = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
        if(maxx < arr[i] ) maxx = arr[i] ;
    }
    
    int cnt = count(arr, arr + n , maxx) ;
    
    vector<int> ans ;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == maxx) continue ;
        else ans.push_back(arr[i]) ;
    }

    while(cnt--) ans.push_back(maxx) ;
    for(auto x : ans) cout << x << " " ;
    cout << endl ;
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
