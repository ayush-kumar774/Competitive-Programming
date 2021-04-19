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
#define print(x) cout << x << endl ;

void solve()
{
        int h , w , x , y ;
        cin >> h >> w >> x >> y ;
        string str[h] ;
        for (int i = 0 ;  i < h ; i++) {
                cin >> str[i] ;
        }
        int leftPoint = 0 ;
        int rightPoint = 0 ;
        int upPoint = 0 ;
        int downPoint = 0 ;
        for (int i = y ; i < w ; i++) {
                if (str[x - 1][i] == '#') {
                        break ;
                }
                else {
                        //cout << "Right " << "str [" << x << "][" << i + 1 << "]" << " = " << str[x - 1][i] << endl ;
                        rightPoint++ ;
                }
        }
        for (int i = y - 2 ; i >= 0 ; i--) {
                if (str[x - 1][i] == '#') {
                        break ;
                }
                else {
                        //cout << "Left " << "str [" << x  << "][" << i + 1 << "]" << " = " << str[x - 1][i] << endl ;
                        leftPoint++ ;
                }
        }
        for (int i = x - 2 ; i >= 0 ; i--) {
                if (i == h) break ;
                if (str[i][y - 1] == '#') {
                        break ;
                }
                else {
                        //cout << "Up " << "str [" << i  << "][" << y + 1 << "]" << " = " << str[i][y - 1] << endl ;
                        upPoint++ ;
                }
        }
        for (int i = x ; i < h ; i++) {
                if (str[i][y - 1] == '#') {
                        break ;
                }
                else {
                        //cout << "Down " << "str [" << i  << "][" << y + 1  << "]" << " = " << str[i][y - 1] << endl ;
                        downPoint++ ;
                }
        }
        cout << (leftPoint + rightPoint + upPoint + downPoint + 1) << endl ;   
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

