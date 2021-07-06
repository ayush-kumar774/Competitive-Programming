#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast                              \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);
#define endl '\n'

void solve()
{
        int n ;
        cin >> n ;
        set<int> s ;
        for (int i = 2 ; i * i <= n ; i++) {
                int x = i * i ;
                while (x <= n)
                {
                        s.insert(x) ;
                        x *= i ;
                }
                
        }
        cout << n - s.size() << endl ;
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