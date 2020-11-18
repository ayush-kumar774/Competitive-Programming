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
        string s ;
        cin >> s ;
        string t = s ;
        reverse(all(t)) ;
        if (s != t) cout << "NO" << endl ;
        else {
                int a = count(all(s) , 'A') ;
                int h = count(all(s) , 'H') ;
                int i = count(all(s) , 'I') ;
                int m = count(all(s) , 'M') ;
                int o = count(all(s) , 'O') ;
                int u = count(all(s) , 'U') ;
                int v = count(all(s) , 'V') ;
                int w = count(all(s) , 'W') ;
                int x = count(all(s) , 'X') ;
                int y = count(all(s) , 'Y') ;
                int t = count(all(s) , 'T') ;
                if (a + h + i + m + o + u + v + w + x + y + t == sz(s)) {
                        cout << "YES" << endl ;
                }
                else cout << "NO" << endl ;
        }
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
