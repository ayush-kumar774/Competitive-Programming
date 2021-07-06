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
        int res = 1.0 ;
        while (b > 0) {
                if (b % 2) {
                        res = res * a ;
                }
                a = a * a ;
                b >>= 1 ;
        }
        return res ;
}
void solve() {
        int ball ;
        cin >> ball ;
        int a , b , c , d , e , f ;
        cin >> a >> b >> c >> d >> e >> f ;
        int currentPos = ball ;
        if (a == currentPos) currentPos = b ;
        else if (b == currentPos) currentPos = a ;
        if (c == currentPos) currentPos = d ;
        else if (d == currentPos) currentPos = c ;
        if (e == currentPos) currentPos = f ;
        else if (f == currentPos) currentPos = e ;
        cout << currentPos << endl ;
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
