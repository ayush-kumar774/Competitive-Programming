// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
#define sz(v)	( (int) ( (v).size() ) )
#define all(v)	( (v).begin() ) , ( (v).end() )
#define allr(v)	( (v).rbegin() ) , ((v).rend())
const int mod = (int)1e9 + 7 ;

void solve() {
        int h1, h2 ;
        int a , b ;
        cin >> h1 >> h2 ;
        cin >> a  >>  b ;
        if (h1 + 8 * a >= h2) 
        {
                cout << 0 << endl ;
        }
        else if (a > b) 
        {
                int rem = h2 - h1 - 8 * a ;
                int down = 12 * ( a - b ) ;
                cout << ( rem + down - 1 ) / down << endl ; 
        }
        else 
                cout << -1 << endl ;
}

int32_t main()
{
        #ifndef ONLINE_JUDGE
	        freopen("input.txt", "r", stdin);
	        freopen("output.txt", "w", stdout);
        #endif
        fast ;
        int testcases = 1 ;
        // cin >> testcases ;
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
