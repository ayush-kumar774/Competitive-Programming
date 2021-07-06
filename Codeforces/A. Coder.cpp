// https://codeforces.com/problemset/problem/384/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , counter = 0 ;
    cin >> n ;
    // cout << n << endl ;
    char ans[n][n] = {'.'} ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if((i + j ) % 2 == 0) {
                ans[i][j] = 'C' ;
                counter++;
            }
            else ans[i][j] = '.' ;
        }
    }
    cout << counter << endl ; 
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout << ans[i][j] ;
        }
        cout << endl ; 
    }
}

int32_t main()
{
    int testcases = 1 ;
    //cin >> testcases ;
    while (testcases--)
    {
        solve() ;
    }
    return 0 ;
}



/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/
