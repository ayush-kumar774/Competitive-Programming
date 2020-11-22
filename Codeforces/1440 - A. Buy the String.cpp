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

void solve()
{
        int n , c0 , c1 , h ;
        cin >> n >> c0 >> c1 >> h ;
        string s ;
        cin >> s ;
        int _1 = count(all(s), '1') ;
        int _0 = count(all(s), '0') ;
        int ans = 0 ;
        if (c0 == c1) {
                ans = (sz(s) * h) ;
                cout << ans << endl ;
        }
        else if (c0 > c1) {
                ans = (_0 * c0) ;
                ans += (sz(s) * h) ;
                cout << ans << endl ;
        }
        else {
                ans = (_0 * c0) ;
                ans += (sz(s) * h) ;
                cout << ans << endl ;
        }
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