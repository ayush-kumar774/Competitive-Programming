#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
#define all(x)  (x).begin() , (x).end() 

void solve()
{
        int n , k ;
        cin >> n >> k ;
        vector<int> v(n) ;
        for (auto &x : v) cin >> x ;
        k-- ;
        while(v[k] == 0) {
                k = (k + 1) % n ;
        }
        cout << k + 1 << endl ;
}

int32_t main()
{
        fast ;
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        int testcases = 1;
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