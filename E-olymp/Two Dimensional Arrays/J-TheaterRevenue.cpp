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
    int n , m ;
    cin >> n >> m ;
    int prices[n][m] ;
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < m ; j++)
        {
            cin >> prices[i][j] ;
        }
    }
    int vaccant[n][m], price = 0 ;
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < m ; j++)
        {
            cin >> vaccant[i][j] ;
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(vaccant[i][j])
            {
                price += prices[i][j] ;
            }
        }
    }

    cout << price << endl ;
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
