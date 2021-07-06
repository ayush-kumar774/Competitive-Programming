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
#define mod 1e9 + 7

void solve()
{
        int n ;
        cin >> n ;
        string ans = "1" ;
        string str ;
        cin >> str;
        int sumPrev = ( (str[0] - 48) + 1 ) ;

        for (int i = 1 ; i < sz(str) ; i++)
        {
                if ( ( (str[i] - 48 ) + 1 ) == sumPrev) {
                        ans += '0';
                        sumPrev = (str[i] - 48 ) ;
                }
                else {
                        ans += '1' ;
                        sumPrev = ( (str[i] - 48 ) + 1 ) ;
                }
        }

        cout << ans << endl ;
        
}

int32_t main()
{
        // #ifndef ONLINE_JUDGE
	//         freopen("input.txt", "r", stdin);
	//         freopen("output.txt", "w", stdout);
        // #endif
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
