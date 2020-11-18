// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl "\n"

void solve()
{
	int n , counter = 0 ;
        cin >> n ;
        map<string, string> mp ;
        while(n--) {
                string a , b ;
                cin >> a >> b ;
                if (mp[a] == "") {
                        mp[b] = a ;
                        counter++ ;
                }
                else {
                        mp[b] = mp[a] ;
                        mp[a] = "" ;
                }
        }
        cout << counter << endl ;
        for (auto x : mp) {
                if (x.second != "") {
                        cout << x.second << " " << x.first << endl ;
                }
        }
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
        return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 */
