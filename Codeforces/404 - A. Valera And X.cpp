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
        char mat[n][n] ;
        set <char> s ;
        for ( int i = 0 ; i < n ; i++ ) {
                for ( int j = 0 ; j < n ; j++ ) {
                        cin >> mat[i][j] ;
                        s.insert(mat[i][j]) ;
                }
        }
        if (s.size() != 2) cout << "NO" << endl ;
        else {
                set<char> ss ;
                char ch ;
                for (int i = 0 ; i < n ; i++) {
                        for (int j = 0 ; j < n ; j++) {
                                if (i == j) {ss.insert(mat[i][j]) ; ch = mat[i][j] ;}
                                if (i + j == (n - 1)) ss.insert(mat[i][j]) ;
                        }
                }
                bool flag = false ;
                if (ss.size() == 1) {
                        for (int i = 0 ; i < n ; i++) {
                                for (int j = 0 ; j < n ; j++) {
                                        if (mat[i][j] == ch) {
                                                if (i == j) continue ;
                                                else if (i + j == (n -1)) continue ;
                                                else flag = true ;
                                        }
                                }
                        }
                        if (flag) cout << "NO" << endl ;
                        else cout << "YES" << endl ; 
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