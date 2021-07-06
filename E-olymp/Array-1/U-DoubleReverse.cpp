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
    int n , a , b , c , d ;
    cin >> n >> a >> b >> c >> d ;
    int arr[n] ;
    for(int i = 0 ; i < n ;  i++)
    {
        arr[i] = i + 1 ;
    }
    reverse(arr + a - 1, arr + b) ;
    reverse(arr + c - 1, arr + d) ;

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
