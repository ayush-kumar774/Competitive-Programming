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
       string s ;
       cin >> s ;
       int a = count(all(s) , 'a') ;
       if (a == sz(s)) cout << s << endl ;
       else {
               int lastA = 0 ;
               int n = sz(s) ;
               for (int i = n - 1 ; i >= 0 ; i--) {
                       if (s[i] == 'a') {
                               lastA = i ;
                               break ;
                       }
               }
               if (lastA == n - 1 or lastA == n - 2) {
                       cout << ":(" << endl ;
               }
               else if (lastA == 0) {
                       string a , b ;
                       if (n % 2) cout << ":(" << endl ;
                       else {
                               string a = "", b = "" ;
                               for (int i = 0 ; i < (n / 2) ; i++) a += s[i] ;
                               for (int i = (n / 2) ; i < (n) ; i++) b += s[i] ;
                               if (a == b) cout << a << endl ;
                               else cout << ":(" << endl ;
                       } 
               }
               else {
                       string str = "" ;
                       for (int i = lastA + 2 ; i < n ; i++) {
                               str += s[i] ;
                       }
                       string str2 = "" ;
                       for (int i = 0; i < lastA + 2 ; i++) {
                               if (s[i] == 'a') continue ;
                               else str2 += s[i] ;
                       }
                       if (str2 == str) {
                               for (int i = 0; i < lastA + 2; i++) {
                                       cout << s[i] ;
                                }
                       }
                       else cout << ":(" << endl ;
               }
       }

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