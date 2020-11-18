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
    int arr[n] = {0} , maxx = 0, index = 0;
    for(int i = 0 ;i < n ; i++)
    {
        cin >> arr[i] ;
        if(maxx < arr[i]) {
            maxx = arr[i] ;
        }
    }
    // cout << minn << endl ;
    for(int i = n - 1 ; i >= 0 ; i--) {
        if(arr[i] == maxx) {
            index = i ;
            break ;
        }
    }
    swap(arr[n- 1], arr[index] );
    for(auto x : arr) cout << x << " " ;
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
