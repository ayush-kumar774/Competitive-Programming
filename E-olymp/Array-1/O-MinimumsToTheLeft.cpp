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
    int arr[n], minn = 99999 ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
        if(minn > arr[i] ) minn = arr[i] ;
    }
    
    int cnt = count(arr, arr + n , minn) ;
    
    vector<int> ans ;
    while(cnt--) ans.push_back(minn) ;
    
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == minn) continue ;
        else ans.push_back(arr[i]) ;
    }

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
