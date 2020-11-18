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
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto &x : v) cin >> x ;
        int ans = 0 ;
        for (int i = 0 ; i < n ; i++) {
                ans += (v[i] + (v[i] - 1) * i) ;
        }
        cout << ans << endl ;
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
