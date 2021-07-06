// https://codeforces.com/problemset/problem/701/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    pair < int , int > p [101];
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> p [i].first ; 
        p [i].second = i ;
    }
    sort ( p , p + n ) ;
    for ( int i = 0 ; i < n / 2 ; i++ )
    cout << p[i].second + 1 <<" " << p[n - i - 1].second + 1 << endl ;
}
int32_t main()
{
    int testcases = 1 ;
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