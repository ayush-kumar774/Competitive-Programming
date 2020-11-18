// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
        int n , m ;
        cin >> n >> m ;
        char grid[n][m] ;
        int face = 0 ;
        for (int i = 0 ; i < n ; i++) {
                for (int j = 0 ; j < m ; j++) {
                        cin >> grid[i][j] ;
                }
        }
        for (int i = 0 ; i < n ; i++) {
                for (int j = 0 ; j < m ; j++) {
                        if (grid[i][j] == 'f' or grid[i][j] == 'a' or grid[i][j] == 'c' or grid[i][j] == 'e') {
                                bool f = false ;
                                bool a = false ;
                                bool c = false ;
                                bool e = false ;
                                if (grid[i] [j] == 'a') a = true ;
                                if (grid[i] [j] == 'c') c = true ;
                                if (grid[i] [j] == 'e') e = true ;
                                if (grid[i] [j] == 'f') f = true ;
                                if (i + 1 < n ) {
                                        if (grid[i + 1] [j] == 'a') a = true ;
                                        if (grid[i + 1] [j] == 'c') c = true ;
                                        if (grid[i + 1] [j] == 'e') e = true ;
                                        if (grid[i + 1] [j] == 'f') f = true ;
                                }
                                if (j + 1 < m) {
                                        if (grid[i] [j + 1] == 'a') a = true ;
                                        if (grid[i] [j + 1] == 'c') c = true ;
                                        if (grid[i] [j + 1] == 'e') e = true ;
                                        if (grid[i] [j + 1] == 'f') f = true ;
                                }
                                if (j + 1 < m and i + 1 < n ) {
                                        if (grid[i + 1] [j + 1] == 'a') a = true ;
                                        if (grid[i + 1] [j + 1] == 'c') c = true ;
                                        if (grid[i + 1] [j + 1] == 'e') e = true ;
                                        if (grid[i + 1] [j + 1] == 'f') f = true ;
                                }
                                if (a and c and e and f) face++ ;
                        }
                }
        }
        cout << face << endl ;
}

int32_t main()
{
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