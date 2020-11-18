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

void solve() {
        int n ;
        string s ;
        cin >> s >> n ;
        string v[n] ;
        for (int i = 0 ; i < n;  i++) cin >> v[i] ;
        sort(v , v + n) ;
        int m = sz(s) ;
        bool cond = false ;
        int ans = 0 ;
        for (int i = 0 ; i < n ; i++) {
                int counter = 0 ;
                for (int j = 0 ; j < m ; j++) {
                        if (s[j] == v[i][j]) {
                                counter++ ;
                        }
                        if (counter == m) {
                                ans = i ;
                                cond = true ;
                                break ;
                        }
                }
                if (cond) break ;
        }
        if (cond) cout << v[ans] << endl ;
        else cout << s << endl ;
}

int32_t main()
{
        // #ifndef ONLINE_JUDGE
	//         freopen("input.txt", "r", stdin);
	//         freopen("output.txt", "w", stdout);
        // #endif
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
