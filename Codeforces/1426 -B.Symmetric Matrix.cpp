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
        int n , m ;
        cin >> n >> m ;
        int l = n ;
        int counter = 0 ;
        while(l--) {
                int x1, y1 , x2 , y2 ;
                cin >> x1 >> y1 >> x2 >> y2 ;
                if (y1 == x2) {
                        counter++ ;
                }
        }
        if (m % 2) cout << "NO" << endl ;
        else if (counter >= 1 and m % 2 == 0) cout << "YES" << endl ;
        else cout << "NO" << endl ;
        
}

int32_t main()
{
        fast ;
        int testcases = 1 ;
        cin >> testcases ;
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