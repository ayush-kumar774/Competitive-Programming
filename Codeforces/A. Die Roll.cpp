// https://codeforces.com/problemset/problem/9/A

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int y, w ;
    cin >> y >> w ;
    int a = max(y, w) ;
    a -= 1 ;
    a = abs(6 - a) ;
    // cout << a << endl ;
    if(a == 1) cout << "1/6" << endl ;
    else if(a == 2) cout << "1/3" << endl ;
    else if(a == 3) cout << "1/2" << endl ;
    else if(a == 4) cout << "2/3" << endl ;
    else if(a == 5) cout << "5/6" << endl ;
    else if(a == 6) cout << "1/1" << endl ;
}

int32_t main()
{
    fast ;
    int testcases = 1;
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