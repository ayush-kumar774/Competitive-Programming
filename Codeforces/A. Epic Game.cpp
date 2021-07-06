// https://codeforces.com/problemset/problem/34/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int Simon , Antisimon , n ;
    cin >> Simon >> Antisimon >> n ;
    while (n != 0)
    {
        int a = __gcd(Simon, n) ;
        n -= a ;
        if(n == 0) {
            cout << 0 << endl ;
            break ;
        }
        else
        {
            a = __gcd(Antisimon, n) ;
            n -= a ;
            if(n == 0) {
                cout << 1 << endl ;
                break ;
            }
        }
        
    }
    
}

int32_t main()
{
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
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

