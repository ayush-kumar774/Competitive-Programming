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
       int n ;
       cin >> n ;
       vector<int> v(n) ;
       for (auto &x : v) cin >> x ;
       int min = *min_element(all(v)) ;
       int max = *max_element(all(v)) ;
       int counter1 = 0 , counter2 = 0 ;
       for (int i = 0 ; i < n ; i++) {
               if (v[i] == min) {
                       counter1++ ;
               }
               if (v[i] == max) {
                       counter2++ ;
               }
       } 
       if (min == max) cout << 0 << endl ;
       else cout << ( n - counter1 - counter2 ) << endl ;  
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