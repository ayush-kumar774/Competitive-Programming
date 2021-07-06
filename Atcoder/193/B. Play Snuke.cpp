#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast                              \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);
#define endl '\n'

struct shops
{
        int price ;
        int stocks ;
        int distance ;
};

void solve()
{
        int minn = INT_MAX ;
        int n ;
        cin >> n ;
        shops s[n] ;
        for (int i = 0 ; i < n ; i++) {
                cin >> s[i].distance >> s[i].price >> s[i].stocks ;
                if (s[i].stocks > s[i].distance) {
                        minn = min(minn, s[i].price) ;
                }
        }
        if (minn == INT_MAX) {
                cout << -1 << endl ;
        }
        else {
                cout << minn << endl ;
        }

}

int32_t main()
{
        fast;
        int testcases = 1;
        // cin >> testcases ;
        while (testcases--)
        {
                solve();
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