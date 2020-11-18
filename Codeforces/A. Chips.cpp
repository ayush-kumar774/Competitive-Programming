// https://codeforces.com/problemset/problem/92/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m , i = 1 , ans = 0 ;
    cin >> n >> m ;
    while (1)
    {
        ans = m ;
        m -= i ;
        if(m == 0) {
            ans = 0  ;
            break ;
        }
        else if(m < 0)
        {
            break ;
        }
        //cout << m << " " << i << endl ;
        i++ ;
        if(i == n + 1) i = 1 ;
    }
    cout << ans << endl ;
    
}

int32_t main()
{
    fast ;
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