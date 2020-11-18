// https://codeforces.com/problemset/problem/214/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m , counter = 0  ;
    cin >> n >> m ;
    for(int i = 0 ; i <= sqrt(n) ; i++)
    {
        for(int j = 0 ; j <= sqrt(m); j++) 
        {
            if( ( ( i * i ) + j == n ) and (i + (j * j) == m ) ) counter++ ;
        }
    }
    cout << counter << endl ;
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