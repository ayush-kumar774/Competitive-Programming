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
	int n ;
        cin >> n ;
        string alpha = "abcd";
        int k = n / 4 ;
        int rem = n % 4 ;
        for (int i = 0 ; i < k ; i++) {
                cout << alpha ;
        }
        for (int i = 0 ; i < rem ; i++) {
                cout << alpha[i] ;
        }
        cout << endl ;
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
