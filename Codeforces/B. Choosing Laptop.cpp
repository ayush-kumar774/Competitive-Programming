#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
#define all(x)  (x).begin() , (x).end() 

struct laptops {
        int speed = 0 ;
        int ram   = 0 ;
        int hdd   = 0 ;
        int cost  = 0 ;
        bool outdated = false ;
};

void solve()
{
        int n ;
        cin >> n ;
        vector<laptops> v(n) ;
        for (int i = 0 ; i < n ; i++) {
                cin >> v[i].speed >> v[i].ram >> v[i].hdd >> v[i].cost ;
        }

        for (int i = 0 ; i < n ; i++) {
                for (int j = 0 ; j < n ; j++) {
                        if (v[i].speed < v[j].speed and v[i].ram < v[j].ram and v[i].hdd < v[j].hdd) {
                                v[i].outdated = true ;
                        }
                }
        }
        int cost = 9999 ;
        int index = 0 ;
        for (int i = 0; i < n ; i++) {
                if (v[i].outdated == false and v[i].cost <= cost) {
                        index = i + 1 ;
                        cost = v[i].cost ;
                }
        }
        //cout << cost << " " << index << endl ;
        cout << index << endl ;
}

int32_t main()
{
        fast ;
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
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