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
        if(arr[i] > maxx) maxx = arr[i] ;
    }
    //cout << maxx << endl ;
    int ans = count(arr, arr + n , maxx) ;
    cout << ans << endl ;
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
