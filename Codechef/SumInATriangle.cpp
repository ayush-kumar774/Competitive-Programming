// https://www.codechef.com/problems/DECINC

// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long

void solve()
{
    int n ;
    cin >> n ;
    int arr[n][n] = {0} ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0; j <= i ; j++)
        {
            cin >> arr[i][j] ;
        }
    }

    for(int i = n - 1 ; i >= 0 ; i-- )
    {
        for(int j = 0 ; j <= i - 1 ; j++)
        {
            if( arr[i][j] > arr[i][j + 1] ) arr[i - 1][j] += arr[i][j] ;
            else arr[i - 1] [j] += arr[i] [j + 1] ;
        }
    }
    cout << arr[0][0] << endl ;
}

int32_t main()
{
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
