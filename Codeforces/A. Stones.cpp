// https://codeforces.com/problemset/problem/1236/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int a , b , c , countZero = 0 ;
    cin >> a >> b >> c ;
    if (a == 0) countZero++ ;
    if (b == 0) countZero++ ;
    if (c == 0) countZero++ ;

    if (countZero >= 2) cout << 0 << endl ;
    else if (b == 0 ) cout << 0 << endl ;
    else if (b * 2  <= c ) cout << 3 * b << endl ;
    else
    {
        int d =  c / 2 ;
        int ans = 0 ;
        if (d == 0 ) {
            if (a * 2 <= b) cout << 3 * a << endl ;
            else {
                int rem = b / 2 ;
                if (rem == 0) cout << 0  << endl ;
                else {
                    cout << rem * 3 << endl ;
                }
                
            }
        }
        else if (d > 0) {
            ans += (d * 3) ;
            b -= d ;
            if (a * 2 <= b ) ans += (3 * a) ;
            else {
                int rem = b /2 ;
                if (rem > 0) {
                    ans += (rem * 3) ; 
                }
            }
            cout << ans << endl ;
        }
    }
    
}

int32_t main()
{
    fast;
    int testcases = 1 ;
    cin >> testcases ;
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