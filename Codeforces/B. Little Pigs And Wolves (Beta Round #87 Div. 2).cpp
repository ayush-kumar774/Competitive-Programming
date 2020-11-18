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
	int n , m , ans = 0;
	cin >> n >> m;
	char mat[n + 2][m + 2];
	for(int i= 1; i <= n; i++) {
                for(int j = 1; j <= m; j++) {
                        cin >> mat[i][j];
                }
        }
	for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= m; j++) {
                        if(mat[i][j] == 'W') {
                                if (mat [i - 1][j]=='P' || mat [ i + 1][j]=='P' || mat [i][j - 1]=='P' || mat [i][j+1]=='P') {
                                        ans++;
                                }
                        }
                }
        }
	cout << ans << endl ;
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
