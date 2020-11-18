// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
        int n , x ;
        cin >> n >> x ;
        if (n == 1 or n == 2) cout << 1 << endl ;
        else if ( (n - 2) % x == 0 ) cout << ( (n - 2) / x )  + 1 << endl ;
        else if ( (n - 2) % x != 0 ) cout << ( (n - 2) / x )  + 2 << endl ;
}

int32_t main()
{
        fast ;
        int testcases = 1 ;
        cin >> testcases ;
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