#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    int x , y ;
    int neg = 0 , pos = 0 ;
    while (n--)
    {
        cin >> x >> y ;
        if (x > 0) pos++ ;
        else neg++ ;
    }
    if (pos <= 1 or neg <= 1) cout << "Yes" << endl ;
    else cout << "No" << endl ; 
    
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
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/