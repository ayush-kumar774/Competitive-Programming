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
        vector<int> v(n) ;
        for (auto &x : v) {cin >> x ; }
        int minn = 99999999999999 , maxx = 0 ;
        minn = min(minn, (v[1] - v[0])) ;
        maxx = max(maxx, (v[n - 1] - v[0])) ; 
        cout << minn << " " << maxx << endl ;
        for (int i = 1 ; i < n - 1 ; i++) {
                minn = 99999999999999 , maxx = 0 ;
                minn = min(minn, (v[i + 1] - v[i])) ;
                minn = min(minn, (v[i] - v[i - 1])) ;
                maxx = max(maxx, (v[i] - v[0])) ;
                maxx = max(maxx, (v[n - 1] - v[i])) ;
                cout << minn << " " << maxx << endl ;
        }
        minn = 99999999999999 , maxx = 0 ;
        minn = min(minn, ( v[n - 1] - v[n -2]) ) ;
        maxx = max(maxx, (v[n -1] - v[0]) ) ; 
        cout << minn << " " << maxx << endl ;
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