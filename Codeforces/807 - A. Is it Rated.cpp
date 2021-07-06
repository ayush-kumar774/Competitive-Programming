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
#define allr(v)	( (v).rbegin() ) , ( (v).rend() )
const int mod = 1e9 + 7 ;

void solve()
{
        int n ;
        cin >> n ;
        bool flag = false ;
        vector < pair < int , int > > v(n) ;
        for (int i = 0 ; i < n ; i++)
        {
                cin >> v[i].first >> v[i].second ;
                if (v[i].first != v[i].second) {
                        flag = true ;
                }
        }
        if (flag) {
                cout << "rated" << endl ;
        }
        else {
                reverse(all(v)) ;
                if (is_sorted(all(v))) {
                        cout << "maybe" << endl ;
                }
                else {
                        cout << "unrated" << endl ;
                }
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
