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


int  gcd(int a, int b) {
	if ( a == 0 ) return b;
	gcd ( b  % a , a ) ;
}

int lcm(int a, int b){
	return ( a * b ) / gcd ( a , b ) ;
}

void solve()
{
       int n , t , k , d ;
       cin >> n >> t >> k >> d ;
       int first = ( ( (n - 1) / k ) ) * t ;
       (first > d ? cout << "YES" : cout << "NO") ;
}

void upsolve() {
        int n , t , k , d ;
        cin >> n >> t >> k >> d;
        int time_1 ;
        if(n % k == 0)
                time_1 = n / k * t;
        else
                time_1 = ( n / k +1)*t;
        if( time_1 <= d + t )
                cout << "NO";
        else
                cout << "YES";
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