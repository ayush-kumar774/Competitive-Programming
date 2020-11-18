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

long long binPow(int a , int b) {
        long long res = 1 ;
        while (b > 0) {
                if (b % 2) {
                        res = res * a ;
                }
                a = a * a ;
                b >>= 1 ;
        }
        return res ;
}

void solve()
{
        int d , n ;
        cin >> d >> n ;
        int x , ans = 0 ;
        for (int i = 0 ; i < n ; i++) {
                cin >> x ;
                if (i == n - 1) continue ;
                else {
                        ans += (d - x) ;
                }              
        }
        cout << ans << endl ;
}

int32_t main()
{
        #ifndef ONLINE_JUDGE
	        freopen("input.txt", "r", stdin);
	        freopen("output.txt", "w", stdout);
        #endif
        fast ;
        int testcases = 1 ;
        //cin >> testcases ;
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
