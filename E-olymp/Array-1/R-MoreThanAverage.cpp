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
    int arr[n] , sum = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
        sum += arr[i] ; 
    }
    int average = sum / n ;
    int cnt = 0 ; 
    sum = 0  ;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > average) 
        {
            cnt++ ;
            sum += arr[i] ;
        }
    }
    cout << sum << " " << cnt << endl ;
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
