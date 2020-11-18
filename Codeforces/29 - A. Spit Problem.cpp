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

struct Camels{
        int pos , dist ;
};

void solve() {
        int n ;
        cin >> n ;
        Camels camels[n] ;
        for (int i = 0 ; i < n ; i++) {
                cin >> camels[i].pos >> camels[i].dist ;      
        } 
        bool flag = false ;
        for (int i = 0 ; i < n ; i++) {
                int distance = camels[i].pos + camels[i].dist ;
                for (int j = 0 ; j < n ; j++) {
                        if (i == j) continue ;
                        if (distance == camels[j].pos) {
                                int distance2 = camels[j].pos + camels[j].dist ;
                                if (distance2 == camels[i].pos) {
                                        flag = true ;
                                        break ;
                                }
                        }
                        if (flag) break ;
                }
        }
        if (flag) cout << "YES" << endl ;
        else cout << "NO" << endl ;
}

int32_t main()
{
        // #ifndef ONLINE_JUDGE
	//         freopen("input.txt", "r", stdin);
	//         freopen("output.txt", "w", stdout);
        // #endif
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
/*
12
-9765 1132
-1382 -215
-9405 7284
-2040 3947
-9360 3150
6425 9386
806 -2278
-2121 -7284
5663 -1608
-8377 9297
6245 708
8470 6024
*/