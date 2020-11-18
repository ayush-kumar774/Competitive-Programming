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
        
        cin >> n ;
        
        char mat[n][n] ;

        for (int i = 0 ; i < n ; i++) {
                for (int j = 0 ; j < n ; j++) {
                        cin >> mat[i][j] ;
                }
        }
        
        char dia = mat[0][0] , rest = mat[0][1] ;
        
        bool cond1 = true , cond2 = true ;

        for (int i = 0 ; i < n ;  i++) {
                for (int j = 0 ; j < n ; j++) {
                        if ( ( (i + j) == (n - 1) ) or (i == j) ) {
                                if (mat[i][j] != dia) cond1 = false ;
                        }
                        else {
                                if (mat[i][j] == dia or mat[i][j] != rest) cond2 = false ;
                        }
                }
        }

        if (cond1 && cond2) cout << "YES" << endl ;
        else cout << "NO" << endl ;
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