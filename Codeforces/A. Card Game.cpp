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
        char ch ;
        cin >> ch ;
        string a , b ;
        cin >> a >> b ;
        char level [] = {'6' , '7' , '8', '9', 'T', 'J', 'Q', 'K' , 'A'};
        if (b[1] == ch and a[1] == ch) {
                int levelA = 0 ;
                int levelB = 0 ;
                for (int i = 0 ; i < 9 ; i++) {
                        if (a[0] == level[i]) levelA = i ;
                        if (b[0] == level[i]) levelB = i ;
                }
                if (levelA > levelB) {
                        cout << "YES" << endl ;
                }
                else {
                        cout << "NO" << endl ;
                }
        }
        else if (b[1] != ch and a[1] == ch) cout << "YES" << endl ;        
        else if (b[1] == ch and a[1] != ch) cout << "NO" << endl ;        
        else if (a[1] == b[1] ) {
                int levelA = 0 ;
                int levelB = 0 ;
                for (int i = 0 ; i < 9 ; i++) {
                        if (a[0] == level[i]) levelA = i ;
                        if (b[0] == level[i]) levelB = i ;
                }
                if (levelA > levelB) {
                        cout << "YES" << endl ;
                }
                else {
                        cout << "NO" << endl ;
                }
        }
        else if (a[1] != b[1]) {
                cout << "NO" << endl ;
        }
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
