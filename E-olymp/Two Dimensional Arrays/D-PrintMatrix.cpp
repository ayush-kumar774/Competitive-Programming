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
    int n , r , c ;
    cin >> n ;
    int arr[n][n] = {0} ; 
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> arr[i][j] ;
        }
    }
    cin >> r >> c ;
    for(int i = 0 ; i < r ;i++ )
    {
        for(int j = 0 ; j < c ; j++)
        {
            cout << arr[i][j] << " " ;
        }
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
