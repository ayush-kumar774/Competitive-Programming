// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl "\n"

void solve()
{
	int k , n ;
        cin >> k >> n ;
        int ans = 0 , counter = 0 ;
        while( n % k == 0) {
                ans = (n / k) ;
                counter++ ;
                n /= k ;
        }
        if (ans == 1) {
                cout << "YES" << endl << counter - 1 << endl ;
        }
        else cout << "NO" << endl ;
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
