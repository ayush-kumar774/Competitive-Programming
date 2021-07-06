#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
const int MOD = 1000000007 ;
 void solve(int num) {
	 int n , k ;
	 cin >> n >> k ;
     string s ;
     cin >> s ;
     int counter = 0 ;
     for (int i = 0 ; i < s.size()/ 2 ; i++) {
         if (s[i] != s[n - 1 - i]) counter++ ;
     }
     if (counter == k) counter = 0 ;
     else if (counter > k) {
        counter = counter - k ;
     }
     else counter = (k - counter) ;
     cout << "Case #" << num << ": " << counter << endl ;
 }

 int32_t main() {
     fast;
     int testcases = 1 ;
     cin >> testcases ;
     for (int i = 1 ; i <= testcases ; i++) {
         solve(i) ;
     }
     return 0;
}
/*  CODED BY:-
//  ___________________________________
// |                       ___         |
// |  /\   /\  \ /  |  |  |___   |__|  |        
// | /~~\ /~~\  |   |__|   ___|  |  |  |
// |___________________________________|
*/
