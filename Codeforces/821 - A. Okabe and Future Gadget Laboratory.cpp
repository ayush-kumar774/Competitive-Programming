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
#define vectorInt vector<int>
#define vectorStr vector<string>
#define vectorDo vector<double>
#define pb push_back
const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const int LINF = 1e18;

void solve()
{
        int n ;
        cin >> n ;
        int a[n][n] ;
        for (int i = 0 ; i < n;  i++) {
                for (int j = 0 ; j < n ; j++) {
                        cin >> a[i][j]  ;
                }
        }
        for (int i = 0 ; i < n ; i++)
        {
                for (int j = 0 ; j < n ; j++) {
                        if (a[i][j] != 1)
                        {
                                int p = 0;
                                for (int k = 0 ; k < n ; k++)
                                for (int t = 0 ; t < n ; t++)
                                if (a[i][k] + a[t][j] == a[i][j] ) { p = 1 ; }
                                if (p == 0) { cout << "No" << endl ; return ; }
                        }
                }
        }  
        cout << "Yes" << endl ;
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