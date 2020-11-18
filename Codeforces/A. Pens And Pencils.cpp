// http://codeforces.com/problemset/problem/1244/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
void solve()
{
    int a , b , c , d , k ;
    cin >> a >> b >> c >> d >> k ;
    int pen = ( ( ( (a % c) == 0 ) ? (a / c) : (a / c ) + 1 ) ) ;
    int pencil = ( ( ( (b % d) == 0 ) ? ( b / d ) : ( b / d ) + 1 ) ) ;
    if (pen + pencil <= k) {
        cout << pen << " " << pencil << endl ;
    }    
    else {
        cout << -1 << endl ;
    }
}

int32_t main()
{
    fast ;
    int testcases = 1;
    cin >> testcases ;
    while (testcases--)
    {
        solve();
    }
    return 0;
}
/*  CODED BY:-
     ___________________________________
    |                       ___         |
    |  /\   /\  \ /  |  |  |___   |__|  |        
    | /~~\ /~~\  |   |__|   ___|  |  |  |
    |___________________________________|
     
    */