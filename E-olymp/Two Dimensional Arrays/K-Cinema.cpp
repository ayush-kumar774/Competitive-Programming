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
    int n, m ;
    cin >> n >> m ;

    int row[n][m] = {0} ;
    int col[n][m] = {0} ;
    int counter = 1 ;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            row[i][j] = counter ;
            counter++ ;
        }
    }
    
    counter = 1 ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            col[j][i] = counter ;
            counter++ ; 
        }
    }

    counter = 0 ;
    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(row[i][j] == col[i][j]) counter++;
        }
    }

    cout << counter << endl ;
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
