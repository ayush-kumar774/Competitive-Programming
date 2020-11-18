// https://codeforces.com/gym/298288/problem/A

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
        int v[102] ;
        for (int i = 1 ; i <= n ; i++) {
                cin >> v[i] ;
        }
        vector<int> cost ;
        for (int i = 1 ; i <= n ; i++) {
                int ans = 0 ;
                for (int j = 1 ; j <= n ; j++)
                {
                        ans += (v[j]* ( abs (j - i) + j - 1 + i - 1 + i - 1 + j - 1 + abs(j - i ) ) );
                }
                cost.push_back(ans) ;
                ans = 0 ;
        }
        int minn = *min_element(all(cost)) ;
        cout << minn << endl ;
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
