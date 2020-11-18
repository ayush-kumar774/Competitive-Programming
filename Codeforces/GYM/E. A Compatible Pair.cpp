// https://codeforces.com/gym/296487/problem/E
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
        vector<int> a(n) , b(m) ;
        for (auto &x : a) cin >> x ;
        for (auto &x : b) cin >> x ;
        sort(a.begin() , a.end()) ;
        sort(b.begin() , b.end()) ;
        int ans = a[n - 2] * b[m - 1];
        if (ans < 0) cout << 0 << endl ;
        else cout << ans << endl ;
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