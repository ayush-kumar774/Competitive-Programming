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
#define print(x) cout << x << endl ;

void solve()
{
        int n ;
        cin >> n ;
        int ans = 0 ;
        if (n >= 1000) {
                ans += n - 999 ;
        }
        if (n >= 1000000) {
                ans += n - 999999;
        }
        if (n >= 1000000000) {
                ans += n - 999999999;
        }
        if (n >= 1000000000000) {
                ans += n - 999999999999;
        }
        if (n >= 1000000000000000) {
                ans += n - 999999999999999;
        }   
        cout << ans << endl ;            
}

int32_t main()
{
        #ifndef ONLINE_JUDGE
	        freopen("input.txt", "r", stdin);
	        freopen("output.txt", "w", stdout);
        #endif
        fast ;
        int testcases = 1 ;
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
