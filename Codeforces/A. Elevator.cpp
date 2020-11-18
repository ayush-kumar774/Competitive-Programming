#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
#define all(x)  (x).begin() , (x).end() 

void solve()
{
        string s ;
        int n ;
        cin >> s >> n ;
        if (s == "front" and n == 1) {
                cout << "L" << endl ;
        }
        else if (s == "front" and n == 2) {
                cout << "R" << endl ;
        }
        else if (s == "back" and n == 1) {
                cout << "R" << endl ;
        }
        else if (s == "back" and n == 2) {
                cout << "L" << endl ;
        }
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