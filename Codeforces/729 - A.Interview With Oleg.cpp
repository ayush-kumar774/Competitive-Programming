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
        string s , ans = "" ;
        cin >> n >> s ;
        for (int i = 0 ; i < n ; i++) {
                if ( s[i] != 'o' ) {
                        ans  += s[i] ;
                }
                else {
                        int j = i + 1 ;
                        while (j < n - 1 and s[j] == 'g' and s[j + 1] == 'o') {
                                //cout << j << endl ;
                                j += 2 ;
                        }
                        if (j != i + 1) ans += "***" ;
                        else {
                                ans += 'o' ;
                        } 
                        i = j - 1 ;
                }
        }
        cout << ans << endl ;

}

int32_t main()
{
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