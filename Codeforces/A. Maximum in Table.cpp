// https://codeforces.com/contest/509/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    vector<vector<int>> v(n, vector<int>(n, 0)) ;
    
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n; j++)
        {
            if ( i == 0 or j == 0 ) v[i][j] = 1 ;
            else v[i][j] = v[i - 1] [j] + v[i] [j- 1] ;
        }
    }

    cout << v[n - 1] [n - 1] << endl ;
}

int32_t main()
{
    int testcases = 1;
    //cin >> testcases ;
    while(testcases--)
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