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
    
    int arr[n], minn ;
    
    for(auto &x : arr) cin >> x ;
    int brr[n] ;
    for(int i = 0 ; i < n; i++)
    {
        brr[i] = arr[i] ;
    }
    sort(arr, arr + n ) ;
    
    for(int i = 0; i < n ; i++)
    {
        if(arr[i] > 1){
            minn = arr[i] ;
            break ;
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << brr[i] + minn << " " ;
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
